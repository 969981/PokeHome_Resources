/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ee384; name: FUN_.text__006ee384
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN__text__006ee384(undefined8 *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  int local_18;
  int local_14;
  
  cVar1 = *param_2;
  if (cVar1 == '\0') {
    return 4;
  }
  if (cVar1 == '\x02') {
    local_18 = 0;
    (*(code *)*_DAT_008a5698)(*param_1,0x10,&local_18);
    return (long)local_18;
  }
  if (cVar1 == '\x01') {
    local_14 = 0;
    (*(code *)*_DAT_008a5698)(*param_1,0xf,&local_14);
    return (long)local_14;
  }
  lVar2 = nn::detail::UnexpectedDefaultImpl();
  return lVar2;
}


