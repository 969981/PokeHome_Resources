/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043ea10; name: FUN_.text__0043ea10
 */


void FUN__text__0043ea10(int *param_1,long *param_2)

{
  int iVar1;
  char cVar2;
  
  if (*param_1 == 0) {
    if (param_2[5] != 0) {
      return;
    }
    *param_1 = 1;
    cVar2 = (char)param_2[4];
    param_2[5] = 0;
  }
  else {
    if (*param_1 < 1) {
      return;
    }
    cVar2 = (char)param_2[4];
    param_2[5] = 0;
  }
  if (cVar2 == -1) {
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined1 *)(param_2 + 3) = 0xff;
    iVar1 = *param_1;
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    iVar1 = *param_1;
  }
  if (iVar1 == 1) {
    if (cVar2 != -1) {
      return;
    }
    if ((int)param_2[1] != 0) {
      return;
    }
    *param_1 = 2;
  }
  else if (iVar1 < 2) {
    return;
  }
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)(param_2 + 3) = 0xff;
  *(undefined1 *)(param_2 + 4) = 0xff;
  if (*param_1 == 2) {
    if (*param_2 == 0) {
      *param_1 = 3;
      *param_2 = 0;
      return;
    }
  }
  else if (2 < *param_1) {
    *param_2 = 0;
    return;
  }
  return;
}


