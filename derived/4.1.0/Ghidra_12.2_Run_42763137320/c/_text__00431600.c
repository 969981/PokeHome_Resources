/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00431600; name: FUN_.text__00431600
 */


undefined8 FUN__text__00431600(long param_1,uint param_2,int param_3,int param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int local_88;
  int iStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  
  if (param_3 != param_4) {
    plVar4 = (long *)(param_1 + 0x10);
    plVar5 = (long *)*plVar4;
    *(undefined1 *)(param_1 + 0x38) = 1;
    if (plVar5 != (long *)0x0) {
      do {
        if ((*(uint *)(plVar5 + 2) == param_2) &&
           (plVar2 = (long *)plVar5[1], plVar2 != (long *)0x0)) {
          local_80 = 0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0xff;
          local_60 = 0xff;
          local_58 = 0;
          local_88 = param_4;
          iStack_84 = param_3;
          (**(code **)(*plVar2 + 8))
                    (plVar2,(ulong)param_2 | 0x300000000,&local_80,&iStack_84,&local_88);
        }
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      if ((long *)*plVar4 != (long *)0x0) {
        plVar5 = (long *)0x0;
        plVar2 = (long *)*plVar4;
        do {
          while (plVar1 = (long *)*plVar2, plVar2[1] != 0) {
joined_r0x00431770:
            plVar5 = plVar2;
            plVar2 = plVar1;
            if (plVar1 == (long *)0x0) goto LAB__text__00431774;
          }
          plVar3 = plVar4;
          if (*(long **)(param_1 + 0x10) != plVar2) {
            plVar3 = plVar5;
          }
          *plVar3 = (long)plVar1;
          if (*(long **)(param_1 + 0x18) == plVar2) {
            *(long **)(param_1 + 0x18) = plVar5;
            plVar3 = *(long **)(param_1 + 0x28);
          }
          else {
            plVar3 = *(long **)(param_1 + 0x28);
          }
          if ((plVar2 < plVar3) || (plVar3 + (ulong)*(uint *)(param_1 + 0x30) * 3 <= plVar2)) {
            FUN__text__00400fc0(0);
            *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
            plVar2 = plVar5;
            goto joined_r0x00431770;
          }
          *plVar2 = *(long *)(param_1 + 0x20);
          *(long **)(param_1 + 0x20) = plVar2;
          *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
          plVar2 = plVar1;
        } while (plVar1 != (long *)0x0);
      }
LAB__text__00431774:
      *(undefined1 *)(param_1 + 0x39) = 0;
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return 1;
}


