/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00407180; name: FUN_.text__00407180
 */


void FUN__text__00407180(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  if (param_2 != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x78);
    if (puVar6 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x88);
      if (puVar3 != (undefined8 *)0x0) {
        if (puVar6 == puVar3) {
          puVar4 = (undefined8 *)0x0;
        }
        else {
          puVar5 = puVar3;
          do {
            puVar4 = puVar5;
            puVar5 = (undefined8 *)puVar4[1];
            if (puVar5 == (undefined8 *)0x0) goto LAB__text__00407220;
          } while (puVar6 != puVar5);
        }
        puVar5 = (undefined8 *)(param_1 + 0x88);
        if (puVar6 != puVar3) {
          puVar5 = puVar4 + 1;
        }
        *puVar5 = puVar6[1];
        if (*(undefined8 **)(param_1 + 0x80) == puVar6) {
          *(undefined8 **)(param_1 + 0x80) = puVar4;
        }
        (**(code **)*puVar6)(puVar6);
        FUN__text__00400fc0(5,puVar6);
      }
LAB__text__00407220:
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    lVar2 = FUN__text__00400f80(5,0x58);
    if (lVar2 == 0) {
      *(undefined8 *)(param_1 + 0x78) = 0;
    }
    else {
      FUN__text__0040775c(lVar2,param_2,param_1);
      *(long *)(param_1 + 0x78) = lVar2;
      *(undefined8 *)(lVar2 + 8) = 0;
      plVar1 = (long *)(param_1 + 0x88);
      if (*(long *)(param_1 + 0x88) != 0) {
        plVar1 = (long *)(*(long *)(param_1 + 0x80) + 8);
      }
      *plVar1 = lVar2;
      *(long *)(param_1 + 0x80) = lVar2;
    }
  }
  return;
}


