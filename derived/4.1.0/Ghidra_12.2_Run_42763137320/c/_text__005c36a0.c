/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c36a0; name: FUN_.text__005c36a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c36a0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != param_2) {
    lVar1 = _DAT_008a0110 + 0x10;
    do {
      *(long *)(param_1 + 0x10) = lVar4 + -0x6e0;
      if (*(long *)(lVar4 + -0xb0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xb0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xb0) = 0;
      }
      if (*(long *)(lVar4 + -0xb8) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xb8) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xb8) = 0;
      }
      if (*(long *)(lVar4 + -200) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -200) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -200) = 0;
      }
      if (*(long *)(lVar4 + -0xd0) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar4 + -0xd0) + 0x48) + 0x18))();
        *(undefined8 *)(lVar4 + -0xd0) = 0;
      }
      lVar3 = *(long *)(lVar4 + -0xe0);
      if (lVar3 != 0) {
        plVar5 = (long *)(lVar4 + -0x6c8);
        do {
          if (plVar5[0x2c] != 0) {
            (**(code **)(*(long *)(plVar5[0x2c] + 0x48) + 0x18))();
            plVar5[0x2c] = 0;
          }
          if (plVar5[0x2b] != 0) {
            (**(code **)(*(long *)(plVar5[0x2b] + 0x48) + 0x18))();
            plVar5[0x2b] = 0;
          }
          if (plVar5[0x2a] != 0) {
            (**(code **)(*(long *)(plVar5[0x2a] + 0x48) + 0x18))();
            plVar5[0x2a] = 0;
          }
          if (plVar5[0x29] != 0) {
            (**(code **)(*(long *)(plVar5[0x29] + 0x48) + 0x18))();
            plVar5[0x29] = 0;
          }
          plVar5[0x27] = lVar1;
          if (plVar5[0x28] != 0) {
            (**(code **)(*(long *)(plVar5[0x28] + 0x48) + 0x18))();
            plVar5[0x28] = 0;
          }
          plVar5[5] = 0x8675a8;
          if (plVar5[6] == 0) {
            plVar5[6] = 0;
            pcVar2 = (code *)plVar5[0x18];
          }
          else {
            FUN__text__005d9290();
            lVar4 = plVar5[6];
            plVar5[6] = 0;
            if (lVar4 != 0) {
              (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
            }
            pcVar2 = (code *)plVar5[0x18];
          }
          if (pcVar2 != (code *)0x0) {
            plVar5[0x19] = 0;
            plVar5[0x1a] = 0;
            plVar5[0x17] = 0;
            plVar5[0x18] = 0;
            (*pcVar2)(plVar5 + 0x1b);
          }
          pcVar2 = (code *)plVar5[8];
          if (pcVar2 != (code *)0x0) {
            plVar5[9] = 0;
            plVar5[10] = 0;
            plVar5[7] = 0;
            plVar5[8] = 0;
            (*pcVar2)(plVar5 + 0xb);
          }
          if (plVar5[6] != 0) {
            (**(code **)(*(long *)(plVar5[6] + 0x48) + 0x18))();
            plVar5[6] = 0;
          }
          if (plVar5[4] != 0) {
            (**(code **)(*(long *)(plVar5[4] + 0x48) + 0x18))();
            plVar5[4] = 0;
          }
          if (*plVar5 != 0) {
            (**(code **)(*(long *)(*plVar5 + 0x48) + 0x18))();
            *plVar5 = 0;
          }
          lVar3 = lVar3 + -1;
          plVar5 = plVar5 + 0x40;
        } while (lVar3 != 0);
      }
      lVar4 = *(long *)(param_1 + 0x10);
    } while (lVar4 != param_2);
  }
  return;
}


