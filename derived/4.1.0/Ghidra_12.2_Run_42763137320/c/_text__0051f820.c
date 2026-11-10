/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0051f820; name: FUN_.text__0051f820
 */


undefined8 FUN__text__0051f820(long param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  
  uVar1 = *(uint *)(param_1 + 0x80);
  if (uVar1 != 0) {
    uVar2 = *param_2;
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = uVar2 / uVar1;
    }
    for (puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x78) + (ulong)(uVar2 - uVar3 * uVar1) * 8);
        puVar4 != (undefined8 *)0x0; puVar4 = (undefined8 *)puVar4[2]) {
      if (*(uint *)(puVar4 + 3) == uVar2) {
        *param_3 = *(undefined4 *)(puVar4 + 1);
        return *puVar4;
      }
    }
  }
  *param_3 = 0;
  return 0;
}


