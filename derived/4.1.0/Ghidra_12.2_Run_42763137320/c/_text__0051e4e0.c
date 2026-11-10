/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051e4e0; name: FUN_.text__0051e4e0
 */


/* WARNING: Removing unreachable block (ram,0x0051e530) */

uint * FUN__text__0051e4e0(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar2 = *(uint *)(param_1 + 0x50);
  if (uVar2 == 0) {
    return (uint *)0x0;
  }
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar2 != 0) {
    uVar4 = uVar3 / uVar2;
  }
  for (puVar5 = *(uint **)(*(long *)(param_1 + 0x48) + (ulong)(uVar3 - uVar4 * uVar2) * 8);
      (puVar5 != (uint *)0x0 && (*puVar5 != uVar3)); puVar5 = *(uint **)(puVar5 + 0xe)) {
  }
  puVar1 = (uint *)0x0;
  if (puVar5 != (uint *)0x0) {
    puVar1 = puVar5 + 2;
  }
  return puVar1;
}


