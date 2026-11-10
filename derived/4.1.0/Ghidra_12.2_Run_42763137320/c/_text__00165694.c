/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165694; name: FUN_.text__00165694
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00165694(long param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                        uint param_5,uint param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = FUN__text__0016ae08(*_DAT_0089f560);
  FUN__text__00156ff8(*(undefined8 *)(param_1 + 0x198),param_3,param_4,uVar1);
  uVar2 = FUN__text__00157128(*(undefined8 *)(param_1 + 0x198));
  if (param_2 < *(uint *)(param_1 + 0x1a0)) {
    *(ulong *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 8) =
         (ulong)(param_5 & 3) | ((ulong)param_6 & 7) << 0x12;
    FUN__text__005f3280(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18),uVar2);
    *(undefined2 *)(*(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18 + 0x10) = 0;
    lVar3 = *(long *)(param_1 + 0x1a8) + (ulong)param_2 * 0x18;
    *(ushort *)(lVar3 + 0x12) = *(ushort *)(lVar3 + 0x12) & 0xfffe;
  }
  return;
}


