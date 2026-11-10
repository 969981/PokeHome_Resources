/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00204ef0; name: FUN_.text__00204ef0
 */


ulong FUN__text__00204ef0(long param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  long local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if ((((*param_2 != 0) && (uVar2 = FUN__text__00306588(), (uVar2 & 1) == 0)) &&
      (*(long *)(param_1 + 0x68) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar5)(puVar5);
    plVar4 = (long *)FUN__text__0018d6a0();
    if (plVar4 != plVar3) {
      do {
        plVar3 = (long *)*plVar3;
      } while (plVar3 != plVar4 && plVar3 != (long *)0x0);
      if (plVar3 == (long *)0x0) goto LAB__text__00205100;
    }
    if (puVar5[4] != 0) {
      local_34 = 0;
      local_38 = 0;
      FUN__text__00193404(&local_40,puVar5[4],(long)puVar5 + 0x54,&local_34,&local_38);
      if (local_40 != 0) {
        uVar1 = FUN__text__00303c20(local_40,local_34,local_38);
        if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x00204fb4 */
                    /* WARNING: Treating indirect jump as call */
          uVar2 = (*(code *)(&UNK__text__00204fc4 + (ulong)*(byte *)((ulong)uVar1 + 0x726f70) * 4))
                            ();
          return uVar2;
        }
        uVar1 = 0;
        if (*(char *)(param_1 + 0x87) == '\0') {
          if (*(char *)(param_1 + 0x87) == '\0') {
            if (*(char *)(param_1 + 0x85) == '\0') {
              if (*(char *)(param_1 + 0x83) == '\0') {
                if (*(char *)(param_1 + 0x84) == '\0') {
                  if (*(char *)(param_1 + 0x82) == '\0') {
                    uVar1 = 0;
                    if (*(char *)(param_1 + 0x81) != '\0') {
                      uVar1 = 5;
                    }
                  }
                  else {
                    uVar1 = 4;
                  }
                }
                else {
                  uVar1 = 3;
                }
              }
              else {
                uVar1 = 2;
              }
            }
            else {
              uVar1 = 1;
            }
          }
          else {
            uVar1 = 0;
          }
        }
        if (local_40 != 0) {
          (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        }
        return (ulong)uVar1;
      }
    }
  }
LAB__text__00205100:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl();
}


