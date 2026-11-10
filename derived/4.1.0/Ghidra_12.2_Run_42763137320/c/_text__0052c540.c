/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0052c540; name: FUN_.text__0052c540
 */


void FUN__text__0052c540(undefined1 param_1 [16],undefined8 param_2,undefined8 param_3,long param_4,
                        long param_5,long param_6)

{
  int *piVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (*(int *)(param_4 + 0x38) != 0) {
    lVar3 = *(long *)(param_4 + 0x30);
    if (param_5 == 0) {
      if (param_6 == 0) {
        do {
          FUN__text__0052b270(lVar3);
          lVar3 = lVar3 + 0x118;
        } while (lVar3 != *(long *)(param_4 + 0x30) + (ulong)*(uint *)(param_4 + 0x38) * 0x118);
      }
      else {
        do {
          puVar2 = (undefined8 *)(lVar3 + 0xe0);
          if (*(int *)(lVar3 + 0xf8) != 0) {
            puVar2 = (undefined8 *)(lVar3 + 0x20);
          }
          local_68 = *puVar2;
          local_60 = puVar2[1];
          uStack_58 = puVar2[2];
          uVar5 = FUN__text__00520f94(param_6,&local_68);
          *(undefined8 *)(lVar3 + 8) = uVar5;
          *(undefined8 *)(lVar3 + 0x10) = param_2;
          *(undefined8 *)(lVar3 + 0x18) = param_3;
          FUN__text__0052b270(lVar3);
          lVar3 = lVar3 + 0x118;
        } while (lVar3 != *(long *)(param_4 + 0x30) + (ulong)*(uint *)(param_4 + 0x38) * 0x118);
      }
    }
    else if (param_6 == 0) {
      do {
        puVar2 = (undefined8 *)(lVar3 + 8);
        if (*(int *)(lVar3 + 0xf8) != 0) {
          puVar2 = (undefined8 *)(lVar3 + (ulong)(*(int *)(lVar3 + 0xf8) - 1) * 0x18 + 0x20);
        }
        local_68 = *puVar2;
        local_60 = puVar2[1];
        uStack_58 = puVar2[2];
        uVar5 = FUN__text__00520f94(param_5,&local_68);
        *(undefined8 *)(lVar3 + 0xe0) = uVar5;
        *(undefined8 *)(lVar3 + 0xe8) = param_2;
        *(undefined8 *)(lVar3 + 0xf0) = param_3;
        FUN__text__0052b270(lVar3);
        lVar3 = lVar3 + 0x118;
      } while (lVar3 != *(long *)(param_4 + 0x30) + (ulong)*(uint *)(param_4 + 0x38) * 0x118);
    }
    else {
      piVar4 = (int *)(lVar3 + 0xf8);
      do {
        piVar1 = piVar4 + -0x3c;
        if (*piVar4 != 0) {
          piVar1 = piVar4 + -0x36 + (ulong)(*piVar4 - 1) * 6;
        }
        local_68 = *(undefined8 *)piVar1;
        local_60 = *(undefined8 *)(piVar1 + 2);
        uStack_58 = *(undefined8 *)(piVar1 + 4);
        uVar5 = FUN__text__00520f94(param_5,&local_68);
        *(undefined8 *)(piVar4 + -6) = uVar5;
        *(undefined8 *)(piVar4 + -4) = param_2;
        *(undefined8 *)(piVar4 + -2) = param_3;
        piVar1 = piVar4 + -6;
        if (*piVar4 != 0) {
          piVar1 = piVar4 + -0x36;
        }
        local_68 = *(undefined8 *)piVar1;
        local_60 = *(undefined8 *)(piVar1 + 2);
        uStack_58 = *(undefined8 *)(piVar1 + 4);
        uVar5 = FUN__text__00520f94(param_6,&local_68);
        *(undefined8 *)(piVar4 + -0x3c) = uVar5;
        *(undefined8 *)(piVar4 + -0x3a) = param_2;
        *(undefined8 *)(piVar4 + -0x38) = param_3;
        FUN__text__0052b270(piVar4 + -0x3e);
        piVar1 = piVar4 + 8;
        piVar4 = piVar4 + 0x46;
      } while (piVar1 != (int *)(*(long *)(param_4 + 0x30) +
                                (ulong)*(uint *)(param_4 + 0x38) * 0x118));
    }
  }
  return;
}


