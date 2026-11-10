/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001654dc; name: FUN_.text__001654dc
 */


void FUN__text__001654dc(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                        uint param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN__text__005f29c0(param_3,param_4,*(undefined8 *)(param_1 + 0x170));
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    uVar2 = *(undefined8 *)(param_1 + 0x170);
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) =
         uVar1 & 0xffff | ((ulong)param_5 & 7) << 0x12 | 0x20000;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar2);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
  }
  return;
}


