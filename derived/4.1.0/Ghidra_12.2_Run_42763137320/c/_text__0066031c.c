/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0066031c; name: FUN_.text__0066031c
 */


void FUN__text__0066031c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  char *__s;
  undefined8 local_58;
  
  uVar1 = *(ulong *)(param_3 + 0xf40) & 0x840;
  uVar3 = 0x7149a6;
  if (uVar1 != 0) {
    uVar3 = 0x718d91;
  }
  local_58 = param_2;
  if (param_1 != (undefined8 *)0x0) {
    do {
      __s = (char *)*param_1;
      pcVar5 = strchr(__s,0x3a);
      if ((pcVar5 == (char *)0x0) || (pcVar5[1] != ' ')) {
        FUN__text__00666f74(param_3,0x70b215);
      }
      else {
        iVar4 = FUN__text__00660068(&local_58,0x70d014,__s,uVar3);
        if (iVar4 != 0) {
          return;
        }
      }
      param_1 = (undefined8 *)param_1[1];
    } while (param_1 != (undefined8 *)0x0);
  }
  uVar2 = 1;
  if (uVar1 == 0) {
    uVar2 = 2;
  }
  FUN__text__00660138(&local_58,uVar3,uVar2);
  return;
}


