/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f0aa0; name: FUN_.text__003f0aa0
 */


void FUN__text__003f0aa0(long param_1,byte param_2)

{
  undefined4 uVar1;
  long *plVar2;
  code *pcVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_100 [24];
  long local_e8;
  code *local_e0;
  code *local_d8;
  long local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [96];
  long local_60;
  long local_50;
  byte local_48 [4];
  undefined4 local_44;
  
  plVar5 = *(long **)(param_1 + 0x48);
  plVar4 = *(long **)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (plVar5 != plVar4) {
    do {
      local_d0 = 0;
      lStack_c8 = 0;
      local_e0 = (code *)0x0;
      local_d8 = (code *)0x0;
      if ((code *)plVar5[2] == (code *)0x0) {
        local_60 = plVar5[0x10];
      }
      else {
        (*(code *)plVar5[2])(plVar5 + 4,auStack_c0);
        local_d0 = plVar5[2];
        lStack_c8 = plVar5[3];
        local_e0 = (code *)*plVar5;
        local_d8 = (code *)plVar5[1];
        local_60 = plVar5[0x10];
        if (local_e0 != (code *)0x0) {
          uVar1 = *(undefined4 *)(param_1 + 8);
          FUN__text__005e9290(auStack_100,param_1);
          local_50 = local_60;
          local_48[0] = param_2 & 1;
          local_44 = uVar1;
          (*local_e0)(auStack_c0,&local_44,auStack_100,local_48,&local_50);
          if (local_e8 != 0) {
            (**(code **)(*(long *)(local_e8 + 0x48) + 0x18))();
          }
        }
        pcVar3 = local_d8;
        if (local_d8 != (code *)0x0) {
          local_d0 = 0;
          lStack_c8 = 0;
          local_e0 = (code *)0x0;
          local_d8 = (code *)0x0;
          (*pcVar3)(auStack_c0);
        }
      }
      plVar5 = plVar5 + 0x12;
    } while (plVar5 != plVar4);
    plVar5 = *(long **)(param_1 + 0x48);
    plVar4 = *(long **)(param_1 + 0x50);
    while (plVar2 = plVar4, plVar2 != plVar5) {
      pcVar3 = (code *)plVar2[-0x11];
      plVar4 = plVar2 + -0x12;
      if (pcVar3 != (code *)0x0) {
        plVar2[-0x10] = 0;
        plVar2[-0xf] = 0;
        *plVar4 = 0;
        plVar2[-0x11] = 0;
        (*pcVar3)(plVar2 + -0xe);
      }
    }
  }
  *(long **)(param_1 + 0x50) = plVar5;
  return;
}


