int main(void)
{
	char	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
	sleep(111);
	close(fd);
	return (0);
}