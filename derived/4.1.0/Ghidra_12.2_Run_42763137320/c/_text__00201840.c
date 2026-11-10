/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00201840; name: FUN_.text__00201840
 */


void FUN__text__00201840(long *param_1,uint *param_2,undefined4 *param_3,long *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 uVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long local_298;
  byte local_290 [24];
  long local_278;
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_48;
  
  uVar1 = *param_2;
  local_80 = 0;
  local_68 = 0;
  uVar2 = *param_3;
  lVar10 = *param_4;
  lVar13 = *param_1;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  puVar11 = *(undefined8 **)(*(long *)(lVar13 + 0x60) + 0x60);
  plVar6 = (long *)(**(code **)*puVar11)(puVar11);
  plVar7 = (long *)FUN__text__0012615c();
  if (plVar7 != plVar6) {
    do {
      plVar6 = (long *)*plVar6;
    } while (plVar6 != plVar7 && plVar6 != (long *)0x0);
  }
  local_290[0] = 0xde;
  local_290[1] = 0x52;
  local_290[2] = 0xef;
  local_290[3] = 0x6e;
  local_290[4] = 0xaf;
  local_290[5] = 0xbb;
  local_290[6] = 0xaf;
  local_290[7] = 0xab;
  local_290[8] = 0xe1;
  local_290[9] = 0xff;
  local_290[10] = 0x71;
  local_290[0xb] = 0;
  local_290[0xc] = 0;
  local_290[0xd] = 0;
  local_290[0xe] = 0;
  local_290[0xf] = 0;
  local_290[0x10] = 0x1d;
  local_290[0x11] = 0;
  local_290[0x12] = 0;
  local_290[0x13] = 0;
  local_290[0x14] = 0;
  local_290[0x15] = 0;
  local_290[0x16] = 0;
  local_290[0x17] = 0;
  local_278 = 0;
  uVar8 = FUN__text__0013bb90(puVar11[0xaf],local_290);
  if (local_278 != 0) {
    (**(code **)(*(long *)(local_278 + 0x48) + 0x18))();
  }
  local_88 = (ulong)uVar1 << 0x20;
  local_90 = uVar8;
  local_80 = uVar2;
  local_78 = lVar10 + 0x110;
  local_70 = FUN__text__0013dcb8(lVar10,0,uVar2);
  local_68 = FUN__text__0013dcb8(lVar10,9,uVar2);
  uVar5 = local_80;
  lVar14 = *(long *)(lVar13 + 0x80);
  *(long *)(lVar14 + 8) = lVar10 + 0x110;
  FUN__text__0013dde8(uVar8,local_80);
  if ((int)local_88 == 0) {
    FUN__text__0013e06c(uVar8,0,uVar5);
  }
  else {
    FUN__text__0013e15c(uVar8,0,uVar5);
  }
  uVar12 = 0xcbf29ce484222645;
  memset(local_290,0,0x200);
  snprintf((char *)local_290,0x200,(char *)0x71e493,(ulong)uVar1);
  if (local_290[0] != 0) {
    pbVar9 = (byte *)((ulong)local_290 | 1);
    bVar4 = local_290[0];
    do {
      uVar12 = (uVar12 ^ bVar4) * 0x100000001b3;
      bVar4 = *pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (bVar4 != 0);
  }
  uVar8 = *(undefined8 *)(lVar13 + 0x80);
  local_298 = *(long *)(*(long *)(lVar13 + 0xe8) + 0x60);
  local_48 = uVar12;
  if (local_298 != 0) {
    (**(code **)(*(long *)(local_298 + 0x48) + 0x10))();
  }
  FUN__text__001ac1fc(uVar8,&local_70,&local_298,&local_48);
  if (local_298 != 0) {
    (**(code **)(*(long *)(local_298 + 0x48) + 0x18))();
    local_298 = 0;
  }
  iVar3 = *(int *)(lVar13 + (ulong)(uVar1 + 1) * 0xe68 + 0x1dbc);
  uVar8 = FUN__text__0013e1c4(lVar10,uVar2);
  FUN__text__003a14c4(uVar8,iVar3 != 0);
  *(undefined8 *)(lVar14 + 8) = 0;
  return;
}


