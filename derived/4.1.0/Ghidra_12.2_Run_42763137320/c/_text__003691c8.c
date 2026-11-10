/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003691c8; name: FUN_.text__003691c8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003691c8(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_40;
  undefined4 local_34;
  
  puVar1 = _DAT_0089f448;
  local_34 = 0;
  lVar4 = FUN__text__00371260(*_DAT_0089f448,&local_34);
  local_40 = 0x1f50;
  cVar2 = FUN__text__00369ee0(lVar4,_DAT_008a3038,param_1 + 0x60,&local_40);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3038);
  }
  local_34 = 0;
  lVar4 = FUN__text__00371260(*puVar1,&local_34);
  local_40 = 0x50c20;
  cVar2 = FUN__text__0036a0c0(lVar4,_DAT_008a3040,param_1 + 0x1fb0,&local_40);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3040);
  }
  local_34 = 0;
  lVar4 = FUN__text__00371260(*puVar1,&local_34);
  local_40 = 0x538;
  cVar2 = FUN__text__0036a2a0(lVar4,_DAT_008a3048,param_1 + 0x52be8,&local_40);
  if ((cVar2 == '\0') && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,_DAT_008a3048);
  }
  lVar4 = FUN__text__00371260(*puVar1,0x8aadf0);
  uVar6 = FUN__text__003608a0(lVar4,0x8aadf4);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aadf4);
  }
  uVar7 = *puVar1;
  *(int *)(param_1 + 0x52bd8) = (int)(uVar6 >> 0x20);
  lVar4 = FUN__text__00371260(uVar7,0x8aadf8);
  uVar6 = FUN__text__003608a0(lVar4,0x8aadfc);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aadfc);
  }
  uVar7 = *puVar1;
  *(int *)(param_1 + 0x52bd0) = (int)(uVar6 >> 0x20);
  lVar4 = FUN__text__00371260(uVar7,0x8aae00);
  uVar6 = FUN__text__003608a0(lVar4,0x8aae04);
  if (((uVar6 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aae04);
  }
  uVar7 = *puVar1;
  *(int *)(param_1 + 0x52bd4) = (int)(uVar6 >> 0x20);
  lVar4 = FUN__text__00371260(uVar7,0x8aae08);
  auVar8 = FUN__text__0036a480(lVar4,0x8aae0c);
  if (((auVar8._0_8_ & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aae0c);
  }
  uVar7 = *puVar1;
  *(long *)(param_1 + 0x52be0) = auVar8._8_8_;
  lVar4 = FUN__text__00371260(uVar7,0x8aae10);
  uVar3 = FUN__text__00364040(lVar4,0x8aae14);
  if (((uVar3 & 0xff) == 0) && (plVar5 = *(long **)(lVar4 + 0x58), plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x50))(plVar5,0x8aae14);
  }
  *(bool *)(param_1 + 0x53120) = 0xff < uVar3;
  return;
}


