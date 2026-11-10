/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d6038; name: FUN_.text__005d6038
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005d6038(long param_1,long *param_2,void *param_3,size_t param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long *plStack_60;
  void *pvStack_58;
  size_t sStack_50;
  undefined8 uStack_48;
  
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  uVar4 = 8;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
  sVar5 = param_4;
  plVar1 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x80,8);
  lVar2 = _DAT_008a59c0;
  if (plVar1 == (long *)0x0) {
    auVar7 = (**(code **)(*param_2 + 0xb8))(param_2);
    pcStack_68 = FUN__text__005d619c;
    puStack_70 = (undefined1 *)((long)register0x00000008 + -0x40);
    plStack_60 = param_2;
    pvStack_58 = param_3;
    sStack_50 = param_4;
    uStack_48 = param_1;
    FUN__text__005d620c(&uStack_78,auVar7._8_8_);
    lVar2 = *(long *)(auVar7._0_8_ + 8);
    if (lVar2 != 0) {
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    }
    *(undefined8 *)(auVar7._0_8_ + 8) = uStack_78;
    FUN__text__005d6038(uStack_78,auVar7._8_8_,uVar4,sVar5);
    return;
  }
  plVar1[7] = 0;
  *(undefined4 *)(plVar1 + 8) = 0;
  *(undefined4 *)(plVar1 + 6) = 0;
  *(undefined4 *)(plVar1 + 10) = 0;
  plVar1[0xb] = 0;
  plVar1[0xc] = 0;
  plVar1[0xf] = 0;
  plVar1[9] = lVar2 + 0x50;
  *plVar1 = lVar2 + 0x10;
  plVar1[1] = (long)param_2;
  plVar1[0xd] = 0;
  plVar1[0xe] = 0;
  plVar1[2] = (long)plVar1;
  plVar1[3] = 0x80;
  plVar1[4] = 8;
  plVar1[5] = 0;
  *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
  (**(code **)(plVar1[9] + 0x10))();
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
  }
  *(long **)(param_1 + 0x60) = plVar1;
  lVar2 = (**(code **)(*param_2 + 0x10))(param_2,param_4,0x1000);
  lVar3 = plVar1[0xb];
  plVar1[0xb] = lVar2;
  if (lVar3 != 0) {
    (**(code **)(*(long *)plVar1[0xc] + 0x18))((long *)plVar1[0xc],lVar3,plVar1[0xd],plVar1[0xe]);
  }
  plVar1[0xc] = (long)param_2;
  plVar1[0xd] = param_4;
  plVar1[0xe] = 0x1000;
  memcpy(*(void **)(*(long *)(param_1 + 0x60) + 0x58),param_3,param_4);
  FUN__text__005d5c70(*(undefined8 *)(param_1 + 0x60));
  return;
}


