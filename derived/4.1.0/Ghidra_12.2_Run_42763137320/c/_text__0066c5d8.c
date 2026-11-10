/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066c5d8; name: FUN_.text__0066c5d8
 */


undefined8 FUN__text__0066c5d8(char *param_1,undefined8 *param_2,int param_3,long *param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  char *local_28;
  
  piVar3 = __errno_location();
  *piVar3 = 0;
  *param_4 = 0;
  cVar1 = *param_1;
  do {
    if (cVar1 == '\0') {
LAB__text__0066c640:
      local_28 = (char *)0x0;
      lVar4 = strtol(param_1,&local_28,param_3);
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = local_28;
      }
      if (*piVar3 == 0x22) {
        uVar5 = 1;
      }
      else if (param_1 == local_28) {
LAB__text__0066c690:
        uVar5 = 2;
      }
      else {
        uVar5 = 0;
        *param_4 = lVar4;
      }
      return uVar5;
    }
    iVar2 = FUN__text__0065680c();
    if (iVar2 == 0) {
      if (*param_1 == '-') {
        if (param_2 != (undefined8 *)0x0) {
          *param_2 = param_1;
        }
        goto LAB__text__0066c690;
      }
      goto LAB__text__0066c640;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  } while( true );
}


