# Induction Proving Method

## Definition

## Examples

## Practices

1. Prove that if 𝑛 ≥ 𝟶, 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) = 𝟸<sup>𝑛</sup>

## Answers

1. 𝑛 = 𝟶, (𝟶 𝟶) = 𝟷 = 𝟸<sup>𝟶</sup><br>
𝑛 = 𝟷, (𝟷 𝟶) + (𝟷 𝟷) = 𝟸 = 𝟸<sup>𝟷</sup><br>
𝑛 = 𝟸, (𝟸 𝟶) + (𝟸 𝟷) + (𝟸 𝟸) = 𝟺 = 𝟸<sup>𝟸</sup>

Assume 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) = 𝟸<sup>𝑛</sup> is true,<br>
- 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) + 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) = 𝟸<sup>𝑛</sup> + 𝟸<sup>𝑛</sup> = 𝟸<sup>𝑛+𝟷</sup> (1)
- Shifting one place to right and applying Binomial Coefficient Formula for each pair, 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) + 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) = 𝑆𝑢𝑚(𝐶(𝑛+1, 𝑘), (𝑘, 𝟶, 𝑛+1)) since (𝑛 𝟶) = (𝑛+𝟷 𝟶) and (𝑛, 𝑛) = (𝑛+𝟷, 𝑛+𝟷)

Thus, 𝑆𝑢𝑚(𝐶(𝑛+1, 𝑘), (𝑘, 𝟶, 𝑛+1)) = 𝟸<sup>𝑛+𝟷</sup>.

In conclusion, 𝑆𝑢𝑚(𝐶(𝑛, 𝑘), (𝑘, 𝟶, 𝑛)) = 𝟸<sup>𝑛</sup>