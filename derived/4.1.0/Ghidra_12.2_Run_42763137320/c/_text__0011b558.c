/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011b558; name: FUN_.text__0011b558
 */


/* WARNING: Removing unreachable block (ram,0x0011b5bc) */

void FUN__text__0011b558(long param_1)

{
  int iVar1;
  char cVar2;
  undefined8 uVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  TouchScreenState aTStack_68 [8];
  int local_60;
  undefined4 local_48;
  undefined4 uStack_44;
  
  pcVar6 = (char *)(param_1 + 8);
  uVar3 = *(undefined8 *)pcVar6;
  *pcVar6 = '\0';
  pcVar5 = (char *)(param_1 + 0x14);
  *(undefined8 *)pcVar5 = uVar3;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x10);
  nn::hid::GetTouchScreenState<1ul>(aTStack_68);
  if (local_60 < 1) {
    cVar2 = *pcVar6;
    cVar4 = *pcVar5;
    if (cVar2 == '\0') goto LAB__text__0011b5f0;
  }
  else {
    cVar2 = '\x01';
    *(undefined1 *)(param_1 + 8) = 1;
    *(undefined4 *)(param_1 + 0xc) = local_48;
    *(undefined4 *)(param_1 + 0x10) = uStack_44;
    cVar4 = *pcVar5;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x10);
    return;
  }
LAB__text__0011b5f0:
  if ((cVar2 == '\0') && (cVar4 != '\0')) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  }
  else if ((cVar2 != '\0') && (cVar4 != '\0')) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x30) < 9) {
      iVar1 = *(int *)(param_1 + 0x30) + 1;
    }
    *(int *)(param_1 + 0x30) = iVar1;
    return;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}


