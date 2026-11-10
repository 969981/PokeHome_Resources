/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144ca0; name: FUN_.text__00144ca0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00144ca0(long *param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 local_70;
  ulong uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  long local_28;
  
  lVar2 = *(long *)(*_DAT_0089f4f0 + 0x78);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  FUN__text__00145fe0(&local_28,lVar2,0);
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  lVar2 = *(long *)(local_28 + 0x118);
  local_70 = *(undefined8 *)(lVar2 + 0x60);
  uStack_60 = *(undefined8 *)(lVar2 + 0x70);
  local_50 = *(undefined8 *)(lVar2 + 0x80);
  uStack_40 = *(undefined8 *)(lVar2 + 0x90);
  uStack_58 = *(ulong *)(lVar2 + 0x78) & 0xffffffff;
  uStack_38 = *(ulong *)(lVar2 + 0x98) & 0xffffffff;
  uStack_68 = *(ulong *)(lVar2 + 0x68) & 0xffffffff;
  uStack_48 = *(ulong *)(lVar2 + 0x88) & 0xffffffff;
  uVar1 = **(uint **)(*(long *)(*param_1 + 0x238) + 0x310);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      FUN__text__006d6b30(param_1,&local_70);
    }
  }
  else {
    FUN__text__006d6618(param_1,&local_70);
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


