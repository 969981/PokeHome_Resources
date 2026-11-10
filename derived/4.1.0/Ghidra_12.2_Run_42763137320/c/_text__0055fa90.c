/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0055fa90; name: FUN_.text__0055fa90
 */


void FUN__text__0055fa90(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_2 + 2);
  uVar1 = (uint)uVar2;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar1 = (uint)uVar2 << 2;
  }
  *(uint *)(param_1 + 0x34) = uVar1 << 4;
  lVar3 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                    (*(long **)(param_1 + 0x10),uVar1 << 4,0x718cc3,0xae);
  *(long *)(param_1 + 0x38) = lVar3;
  if (lVar3 == 0) {
    *(undefined2 *)((long)param_2 + 0x12) = 0;
    return;
  }
  if (uVar2 != 0) {
    FUN__text__005602d4(param_1 + 0x40,*(undefined8 *)(param_1 + 8),uVar2);
    uVar4 = FUN__text__00560480(param_1 + 0x40,uVar2,*param_2,*(undefined8 *)(param_1 + 0x38));
    if ((uVar4 & 1) == 0) {
      uVar2 = 0;
    }
    *(ushort *)((long)param_2 + 0x12) = uVar2;
    *(undefined4 *)((long)param_2 + 0xc) = 0x2d;
    lVar3 = *(long *)(param_1 + 0x38);
    if (lVar3 == 0) goto LAB__text__0055fb60;
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))(*(long **)(param_1 + 0x10),lVar3);
  *(undefined8 *)(param_1 + 0x38) = 0;
LAB__text__0055fb60:
  *(undefined4 *)(param_1 + 0x34) = 0;
  return;
}


