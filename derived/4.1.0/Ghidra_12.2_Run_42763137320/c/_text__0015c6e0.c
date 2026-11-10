/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015c6e0; name: FUN_.text__0015c6e0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0015c6e0(long *param_1,long *param_2,undefined4 param_3,ushort param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 local_44;
  long local_40;
  long local_38;
  
  local_38 = *param_2;
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x10))();
  }
  FUN__text__005f3c60(param_1,&local_38,param_3,1,0,1);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
    local_38 = 0;
  }
  lVar3 = _DAT_008a03a0;
  param_1[0x23] = 0;
  *param_1 = lVar3 + 0x10;
  param_1[9] = lVar3 + 0xb0;
  FUN__text__0068e568(param_1 + 0x24);
  lVar3 = _DAT_008a03a8;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)((long)param_1 + 0x177) = 0;
  *(undefined1 *)((long)param_1 + 0x17d) = 1;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined2 *)((long)param_1 + 0x19a) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x24] = lVar3 + 0x10;
  param_1[0x25] = -0xffffff01000000;
  *(undefined2 *)((long)param_1 + 0x17b) = 0x101;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  iVar1 = *_DAT_008a03c0;
  *(ushort *)((long)param_1 + 0x19c) = param_4 & 1;
  uVar2 = FUN__text__0016a510();
  if (((uVar2 & 0xff) < 0xc) && ((1 << (ulong)(uVar2 & 0x1f) & 0x8bcU) != 0)) {
    if ((param_4 & 1) == 0) {
      lVar3 = 0x724a50;
      lVar4 = 0x724bb0;
    }
    else {
      lVar3 = 0x724c30;
      lVar4 = 0x724c00;
    }
  }
  else if ((param_4 & 1) == 0) {
    lVar3 = 0x724a50;
    lVar4 = 0x724830;
  }
  else {
    lVar3 = 0x724c30;
    lVar4 = 0x7249a0;
  }
  FUN__text__005f4f7c(param_1,*(undefined4 *)(lVar3 + (long)iVar1 * 4),
                      *(undefined4 *)(lVar4 + (long)iVar1 * 4));
  param_1[0x10] = (long)(param_1 + 0x24);
  FUN__text__005f4fb0(param_1,0);
  FUN__text__005f4fb8(param_1,1);
  param_1[0x29] = (long)param_1;
  param_1[0x30] = -0x100000000;
  FUN__text__0015c5c4(&local_40,param_1[1],_DAT_008a03b0);
  if (param_1[0x34] != 0) {
    (**(code **)(*(long *)(param_1[0x34] + 0x48) + 0x18))();
  }
  param_1[0x34] = local_40;
  FUN__text__0015c5c4(&local_40,param_1[1],_DAT_008a03b8);
  if (param_1[0x35] != 0) {
    (**(code **)(*(long *)(param_1[0x35] + 0x48) + 0x18))();
  }
  param_1[0x35] = local_40;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = (long *)param_1[1];
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = plVar5;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  lVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,0x250,0x10);
  if (lVar3 == 0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN__text__00163a24(lVar3,1,1,plVar5);
  *(long **)(lVar3 + 8) = plVar5;
  *(long *)(lVar3 + 0x10) = lVar3;
  *(undefined8 *)(lVar3 + 0x18) = 0x250;
  *(undefined8 *)(lVar3 + 0x20) = 0x10;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  if (param_1[0x36] != 0) {
    (**(code **)(*(long *)(param_1[0x36] + 0x48) + 0x18))();
  }
  local_44 = 0x800;
  param_1[0x36] = lVar3;
  FUN__text__00111970(&local_40,param_1[1],&local_44);
  if (param_1[0x37] != 0) {
    (**(code **)(*(long *)(param_1[0x37] + 0x48) + 0x18))();
  }
  param_1[0x37] = local_40;
  return;
}


