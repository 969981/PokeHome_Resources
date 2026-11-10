/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a0404; name: FUN_.text__006a0404
 */


void FUN__text__006a0404(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                        undefined8 param_5)

{
  ushort uVar1;
  ushort uVar2;
  
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_5;
  uVar1 = *(ushort *)(param_4 + 0x60);
  if ((uVar1 & 1) != 0) {
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
    uVar1 = *(ushort *)(param_4 + 0x60);
  }
  if ((uVar1 >> 1 & 1) == 0) {
    uVar2 = *(ushort *)(param_1 + 0x60);
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x60) | 2;
    *(ushort *)(param_1 + 0x60) = uVar2;
    uVar1 = *(ushort *)(param_4 + 0x60);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    uVar2 = uVar2 | 0x10;
    *(ushort *)(param_1 + 0x60) = uVar2;
  }
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_4 + 0x44);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_4 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_4 + 0x50);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_4 + 0x40);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_4 + 0x28);
  if ((uVar2 & 0x12) == 0) {
    return;
  }
  FUN__text__006a02a8();
  return;
}


