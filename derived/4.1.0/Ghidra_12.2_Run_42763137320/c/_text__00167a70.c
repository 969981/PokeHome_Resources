/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00167a70; name: FUN_.text__00167a70
 */


void FUN__text__00167a70(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x78) - 1U < 2) {
    lVar2 = 10;
    lVar3 = param_1;
    do {
      if (*(long *)(lVar3 + 200) == 0) {
        *(undefined8 *)(lVar3 + 200) = 0;
        lVar1 = *(long *)(lVar3 + 0x1d8);
        if (lVar1 != 0) goto LAB__text__00167adc;
LAB__text__00167b1c:
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        lVar1 = *(long *)(lVar3 + 0xb8);
        *(undefined8 *)(lVar3 + 0xb8) = 0;
      }
      else {
        FUN__text__005d9290(*(long *)(lVar3 + 200),lVar3 + 0xc0);
        lVar1 = *(long *)(lVar3 + 200);
        *(undefined8 *)(lVar3 + 200) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar1 = *(long *)(lVar3 + 0x1d8);
        if (lVar1 == 0) goto LAB__text__00167b1c;
LAB__text__00167adc:
        FUN__text__005d9290(lVar1,lVar3 + 0x1d0);
        lVar1 = *(long *)(lVar3 + 0x1d8);
        *(undefined8 *)(lVar3 + 0x1d8) = 0;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar1 = *(long *)(lVar3 + 0xb8);
        *(undefined8 *)(lVar3 + 0xb8) = 0;
      }
      if (lVar1 != 0) {
        (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
      }
      lVar3 = lVar3 + 0x260;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  else if (*(int *)(param_1 + 0x78) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  return;
}


