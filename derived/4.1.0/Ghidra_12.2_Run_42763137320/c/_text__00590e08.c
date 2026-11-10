/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00590e08; name: FUN_.text__00590e08
 */


int FUN__text__00590e08(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar3 = FUN__text__004dc7e4();
  if (iVar3 == 1) {
    lVar5 = *(long *)(param_1 + 0x90);
    if (lVar5 == 0) {
      return 1;
    }
    if (*(int *)(lVar5 + 0x3c) == 0) {
      if (*(int *)(lVar5 + 0x28) == *(int *)(lVar5 + 0x24)) {
        return 0x3f;
      }
      iVar4 = FUN__text__00590890(param_1);
      iVar3 = 0x3f;
      if ((iVar4 != 0x11) && (iVar4 != 0x2e)) {
        if (iVar4 != 0x2d) {
          return 2;
        }
        uVar2 = *(uint *)(param_1 + 0xb4);
        uVar1 = uVar2;
        if (*(uint *)(param_1 + 0x98) <= uVar2) {
          uVar1 = *(uint *)(param_1 + 0x98);
        }
        *(uint *)(param_1 + 0xb4) = uVar2 - uVar1;
        FUN__text__004e42d0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xd8),
                            *(undefined4 *)(param_1 + 0xe0),*(undefined1 *)(param_1 + 0xb8));
        *(undefined1 *)(param_1 + 0xb8) = 0;
        if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
          FUN__text__00400fc0(5);
          *(undefined1 *)(param_1 + 0xe4) = 0;
        }
        *(undefined8 *)(param_1 + 0xd8) = 0;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (*(int *)(*(long *)(param_1 + 0x90) + 0x28) != *(int *)(*(long *)(param_1 + 0x90) + 0x24)
           ) {
          do {
            iVar3 = FUN__text__00590890(param_1);
            if (iVar3 != 0x2d) {
              if ((iVar3 != 0x11) && (iVar3 != 0x2e)) {
                iVar3 = 2;
                goto LAB__text__00590fc4;
              }
              break;
            }
            uVar2 = *(uint *)(param_1 + 0xb4);
            uVar1 = uVar2;
            if (*(uint *)(param_1 + 0x98) <= uVar2) {
              uVar1 = *(uint *)(param_1 + 0x98);
            }
            *(uint *)(param_1 + 0xb4) = uVar2 - uVar1;
            FUN__text__004e42d0(*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0xd8),
                                *(undefined4 *)(param_1 + 0xe0),*(undefined1 *)(param_1 + 0xb8));
            *(undefined1 *)(param_1 + 0xb8) = 0;
            if ((*(char *)(param_1 + 0xe4) != '\0') && (*(long *)(param_1 + 0xd8) != 0)) {
              FUN__text__00400fc0(5);
              *(undefined1 *)(param_1 + 0xe4) = 0;
            }
            *(undefined8 *)(param_1 + 0xd8) = 0;
            *(undefined4 *)(param_1 + 0xe0) = 0;
          } while (*(int *)(*(long *)(param_1 + 0x90) + 0x28) !=
                   *(int *)(*(long *)(param_1 + 0x90) + 0x24));
          iVar3 = 0x3f;
        }
LAB__text__00590fc4:
        nn::os::SignalEvent((EventType *)&DAT_00aeb9a0);
        return iVar3;
      }
    }
    else {
      iVar3 = 1;
    }
  }
  return iVar3;
}


