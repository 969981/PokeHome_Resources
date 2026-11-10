/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee2ac; name: FUN_.text__006ee2ac
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006ee2ac(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  int local_18 [2];
  
  puVar2 = _DAT_008a5698;
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return (long)*(int *)(param_2 + 4) << 4;
  }
  if (cVar1 == '\x02') {
    local_18[1] = 0;
    (*(code *)*_DAT_008a5698)(*param_1,0x12,local_18 + 1);
    uVar3 = *param_1;
    pcVar6 = (code *)*puVar2;
    uVar5 = 0x10;
  }
  else {
    if (cVar1 != '\x01') {
      lVar4 = nn::detail::UnexpectedDefaultImpl();
      return lVar4;
    }
    local_18[1] = 0;
    (*(code *)*_DAT_008a5698)(*param_1,0x11,local_18 + 1);
    uVar3 = *param_1;
    uVar5 = 0xf;
    pcVar6 = (code *)*puVar2;
  }
  local_18[0] = 0;
  (*pcVar6)(uVar3,uVar5,local_18);
  return (long)local_18[0] * (long)*(int *)(param_2 + 4);
}


