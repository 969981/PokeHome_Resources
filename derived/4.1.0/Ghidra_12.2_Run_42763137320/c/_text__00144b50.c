/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00144b50; name: FUN_.text__00144b50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00144b50(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined1 auStack_f0 [104];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = _DAT_008a0268;
  *_DAT_008a0268 = 0x3f8000003f800000;
  puVar3[1] = 0x3f8000003f800000;
  puVar4 = _DAT_008a0278;
  puVar3 = _DAT_008a0270;
  *_DAT_008a0278 = 0x3f8000003f800000;
  puVar4[1] = 0x3f8000003f800000;
  plVar2 = _DAT_0089fc90;
  uVar1 = _DAT_00724990;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = 0;
  lVar6 = *_DAT_0089fc90;
  local_78 = 0;
  uStack_70 = 0;
  local_38 = _DAT_008a0280;
  local_88 = 0;
  uStack_80 = 0;
  pcVar5 = *(code **)(lVar6 + 0x248);
  puVar3[1] = uRam0000000000724998;
  *puVar3 = uVar1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x250) = 0;
    *(undefined8 *)(lVar6 + 600) = 0;
    *(undefined8 *)(lVar6 + 0x240) = 0;
    *(undefined8 *)(lVar6 + 0x248) = 0;
    (*pcVar5)(lVar6 + 0x260);
  }
  FUN__text__0014505c(auStack_f0,lVar6 + 0x260);
  *(undefined8 *)(lVar6 + 0x240) = &LAB__text__00144e20;
  *(code **)(lVar6 + 0x248) = FUN__text__00144f68;
  *(code **)(lVar6 + 0x250) = FUN__text__0014505c;
  *(undefined **)(lVar6 + 600) = &DAT__text__00145060;
  FUN__text__005ec1e8(*(undefined8 *)(lVar6 + 0x238),9,&local_88);
  local_40 = 0;
  local_38 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = _DAT_008a0288;
  FUN__text__005ec1e8(*(undefined8 *)(*plVar2 + 0x238),0,&local_88);
  FUN__text__00144f68(auStack_f0);
  return;
}


