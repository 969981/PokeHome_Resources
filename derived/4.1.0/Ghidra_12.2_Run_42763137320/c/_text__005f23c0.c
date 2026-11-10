/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f23c0; name: FUN_.text__005f23c0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f23c0(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  ushort local_3c;
  undefined6 uStack_3a;
  undefined4 local_34;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar5 = _DAT_0089f690;
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = lVar5 + 0x10;
  lVar3 = _DAT_008a5c68;
  lVar5 = 0;
  if (uVar6 != 0) {
    if (*(long *)(uVar6 + 0x98) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((long)param_1 + 0x54) = param_3;
  param_1[0xb] = 0;
  param_1[0xc] = -0x340d631b7bddd9bb;
  param_1[0xf] = 0;
  param_1[0xd] = 0x70f683;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[9] = lVar3 + 0x48;
  *param_1 = lVar3 + 0x10;
  param_1[1] = lVar5;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  lVar5 = _DAT_0089f708 + 0x10;
  *(undefined1 *)(param_1 + 0x38) = 1;
  param_1[0x16] = lVar5;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  FUN__text__005f2860(param_1,param_2,0,&local_3c,0xc);
  puVar4 = (undefined8 *)
           (**(code **)(*(long *)param_1[1] + 0x10))((long *)param_1[1],(ulong)local_3c * 4 + 0xc,8)
  ;
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = CONCAT62(uStack_3a,local_3c);
    *(undefined4 *)(puVar4 + 1) = local_34;
    FUN__text__005f2860(param_1,param_2,0xc,(long)puVar4 + 0xc,(ulong)local_3c << 2);
  }
  param_1[0x12] = (long)puVar4;
  plVar1 = param_1 + 0xb;
  FUN__text__00168178(plVar1,param_2);
  uVar2 = *_DAT_008a5c70;
  if (*(ushort *)param_1[0x12] <= uVar2) {
    uVar2 = 0;
  }
  *(uint *)(param_1 + 0x11) = uVar2;
  if (*(int *)((long)param_1 + 0x54) == 0) {
    param_1[0x13] = 0;
    return;
  }
  lVar5 = (**(code **)(*(long *)param_1[1] + 0x10))
                    ((long *)param_1[1],*(undefined4 *)((ushort *)param_1[0x12] + 2),8);
  param_1[0x13] = lVar5;
  uVar6 = (ulong)*(uint *)(param_1[0x12] + (ulong)*(uint *)(param_1 + 0x11) * 4 + 0xc);
  if ((char)param_1[0x38] == '\0') {
    param_1[0x13] = uVar6 + param_1[0x12];
    return;
  }
  FUN__text__005f2860(param_1,plVar1,uVar6,lVar5,4);
  FUN__text__005f2860(param_1,plVar1,uVar6,(undefined4 *)param_1[0x13],*(undefined4 *)param_1[0x13])
  ;
  return;
}


