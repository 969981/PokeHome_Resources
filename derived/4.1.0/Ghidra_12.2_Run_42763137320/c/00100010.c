/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: 00100010; name: _DT_INIT
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _DT_INIT(void)

{
  undefined8 *puVar1;
  undefined8 *puVar3;
  undefined8 *puVar2;
  
  if ((_DAT_008aa000 == 0) &&
     (_DAT_008aa000 =
           end(_DAT_0089f1d8,_DAT_0089f1e0,_DAT_0089f1e8,_DAT_0089f1f0,_DAT_0089f1f8,_DAT_0089f200,
               _DAT_0089f210,_DAT_0089f218,_DAT_0089f228,_DAT_0089f220,_DAT_0089f1d0,_DAT_0089f208,
               _DAT_0089f1c8,_DAT_0089f1c0,_DAT_0089f1b8,_DAT_0089f1b0,_DAT_0089f1a8,_DAT_0089f1a0,
               _DAT_0089f198,_DAT_0089f190,_DAT_0089f188), _DAT_008aa000 == 1)) {
    return;
  }
  nn::ro::ProtectRelro(_DAT_0089f230,_DAT_0089f238,_DAT_0089f240,_DAT_0089f248,_DAT_0089f250);
  puVar1 = _DAT_0089f258;
  if (_DAT_0089f260 < _DAT_0089f258) {
    puVar2 = _DAT_0089f260;
    do {
      puVar3 = puVar2 + 1;
      (*(code *)*puVar2)();
      puVar2 = puVar3;
    } while (puVar3 < puVar1);
  }
  return;
}


