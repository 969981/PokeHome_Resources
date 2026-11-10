/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014f530; name: FUN_.text__0014f530
 */


void FUN__text__0014f530(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_190;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [96];
  undefined8 local_100;
  code *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [112];
  long local_70 [2];
  
  iVar4 = FUN__text__005cfdcc(*(undefined8 *)(param_2 + 8));
  if (0 < iVar4) {
    iVar5 = 0;
    uVar6 = tpidr_el0;
    uVar6 = uVar6 & 0xffffffffffffe000;
    do {
      uVar7 = *(undefined8 *)(param_1 + 8);
      FUN__text__005cf7d8(&local_190,param_2,iVar5,0x1ff);
      FUN__text__0014fe4c(local_70,uVar7,&local_190);
      local_190 = 0x867588;
      if (local_188 == 0) {
        local_188 = 0;
        pcVar2 = local_f8;
      }
      else {
        FUN__text__005d9290(local_188,&local_190);
        lVar3 = local_188;
        local_188 = 0;
        pcVar2 = local_f8;
        if (lVar3 != 0) {
          (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
          pcVar2 = local_f8;
        }
      }
      local_f8 = pcVar2;
      if (pcVar2 != (code *)0x0) {
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        local_f8 = (code *)0x0;
        (*pcVar2)(auStack_e0);
      }
      pcVar2 = local_178;
      if (local_178 != (code *)0x0) {
        local_170 = 0;
        uStack_168 = 0;
        local_180 = 0;
        local_178 = (code *)0x0;
        (*pcVar2)(auStack_160);
      }
      if (local_188 != 0) {
        (**(code **)(*(long *)(local_188 + 0x48) + 0x18))();
      }
      plVar1 = *(long **)(param_1 + 0xb8);
      if (plVar1 < *(long **)(param_1 + 0xc0)) {
        if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = *(undefined8 *)(param_1 + 200)
        ;
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + 1;
        *plVar1 = local_70[0];
        if (local_70[0] != 0) {
          (**(code **)(*(long *)(local_70[0] + 0x48) + 0x10))();
        }
        *(long *)(uVar6 + 0x98) = *(long *)(uVar6 + 0x98) + -1;
        *(long **)(param_1 + 0xb8) = plVar1 + 1;
      }
      else {
        FUN__text__0014ff70(param_1 + 0xb0,local_70);
      }
      if (local_70[0] != 0) {
        (**(code **)(*(long *)(local_70[0] + 0x48) + 0x18))();
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
  }
  FUN__text__005bc790(param_1,param_3);
  return;
}


