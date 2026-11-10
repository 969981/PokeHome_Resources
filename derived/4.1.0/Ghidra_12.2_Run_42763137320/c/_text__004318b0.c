/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004318b0; name: FUN_.text__004318b0
 */


undefined8 FUN__text__004318b0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    plVar2 = (long *)0x0;
    do {
      if (plVar1[1] == param_2) {
        if (*(char *)(param_1 + 0x38) == '\0') {
          plVar4 = (long *)*plVar1;
          plVar3 = (long *)(param_1 + 0x10);
          if (*(long **)(param_1 + 0x10) != plVar1) {
            plVar3 = plVar2;
          }
          *plVar3 = (long)plVar4;
          if (*(long **)(param_1 + 0x18) == plVar1) {
            *(long **)(param_1 + 0x18) = plVar2;
            plVar3 = *(long **)(param_1 + 0x28);
            if (plVar3 <= plVar1) goto LAB__text__00431968;
LAB__text__00431988:
            FUN__text__00400fc0(0);
          }
          else {
            plVar3 = *(long **)(param_1 + 0x28);
            if (plVar1 < plVar3) goto LAB__text__00431988;
LAB__text__00431968:
            if (plVar3 + (ulong)*(uint *)(param_1 + 0x30) * 3 <= plVar1) goto LAB__text__00431988;
            *plVar1 = *(long *)(param_1 + 0x20);
            *(long **)(param_1 + 0x20) = plVar1;
          }
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          plVar1 = plVar4;
        }
        else {
          plVar3 = (long *)*plVar1;
          plVar1[1] = 0;
          *(undefined1 *)(param_1 + 0x39) = 1;
          plVar2 = plVar1;
          plVar1 = plVar3;
        }
      }
      else {
        plVar2 = plVar1;
        plVar1 = (long *)*plVar1;
      }
    } while (plVar1 != (long *)0x0);
  }
  return 1;
}


