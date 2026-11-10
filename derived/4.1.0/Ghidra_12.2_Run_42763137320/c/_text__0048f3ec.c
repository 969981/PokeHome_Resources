/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0048f3ec; name: FUN_.text__0048f3ec
 */


void FUN__text__0048f3ec(long *param_1,byte *param_2,byte *param_3,undefined4 *param_4)

{
  byte bVar1;
  ushort uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x40))();
  uVar4 = (**(code **)(*param_1 + 0x38))(param_1);
  *param_2 = *param_2 | 1;
  *param_4 = 0;
  if (((uVar4 & 1) != 0) &&
     (bVar1 = *param_2, *param_2 = bVar1 | 4, (uVar3 & 1) == 0 && (bVar1 & 2) != 0)) {
    *param_3 = *param_3 | 2;
  }
  if ((uVar3 & 1) == 0) {
    uVar2 = *(ushort *)(param_1[1] + 0x14a);
  }
  else {
    *param_2 = *param_2 | 2;
    *param_4 = 0x3f800000;
    uVar2 = *(ushort *)(param_1[1] + 0x14a);
  }
  if ((uVar2 & 1) == 0) {
    *param_3 = *param_3 | 8;
    return;
  }
  return;
}


