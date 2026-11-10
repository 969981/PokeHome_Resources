/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004eaab0; name: FUN_.text__004eaab0
 */


void FUN__text__004eaab0(long param_1,long *param_2)

{
  undefined4 uVar1;
  char cVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  if ((undefined8 *)*param_2 != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*param_2;
    do {
      if (*(int *)(puVar4 + 3) == 1) {
        FUN__text__004e93c0(puVar4[4]);
      }
      else if (*(int *)(puVar4 + 3) == 0) {
        lVar6 = puVar4[4];
        uVar1 = *(undefined4 *)(lVar6 + 0x10);
        cVar2 = *(char *)(lVar6 + 0x2c);
        plVar3 = *(long **)(lVar6 + 8);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0xe0))
                    (plVar3,*(long *)(param_1 + 8) - *(long *)(*(long *)(param_1 + 0x10) + 0x68));
        }
        plVar3 = (long *)(param_1 + 0x40);
        do {
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0 && plVar3 != (long *)lVar6);
        if (plVar3 != (long *)0x0) {
          *(undefined4 *)(plVar3 + 2) = 0;
        }
        if (cVar2 != '\0') {
          FUN__text__004eabb0(param_1,uVar1,1);
        }
      }
      puVar5 = (undefined8 *)puVar4[2];
      plVar3 = param_2;
      if ((undefined8 *)*param_2 != puVar4) {
        plVar3 = (long *)&DAT_00000010;
      }
      *plVar3 = (long)puVar5;
      (**(code **)*puVar4)(puVar4);
      FUN__text__00400fc0(0,puVar4);
      puVar4 = puVar5;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}


