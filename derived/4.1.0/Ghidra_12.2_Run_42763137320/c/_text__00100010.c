/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00100010; name: _init
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _init(EVP_PKEY_CTX *ctx)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  if ((_DAT_008aa000 == 0) &&
     (_DAT_008aa000 =
           end(_DAT_0089f1d8,_DAT_0089f1e0,_DAT_0089f1e8,_DAT_0089f1f0,_DAT_0089f1f8,_DAT_0089f200,
               _DAT_0089f210,_DAT_0089f218,_DAT_0089f228,_DAT_0089f220,_DAT_0089f1d0,_DAT_0089f208,
               _DAT_0089f1c8,_DAT_0089f1c0,_DAT_0089f1b8,_DAT_0089f1b0,_DAT_0089f1a8,_DAT_0089f1a0,
               _DAT_0089f198,_DAT_0089f190,_DAT_0089f188), _DAT_008aa000 == 1)) {
    return 1;
  }
  iVar2 = nn::ro::ProtectRelro
                    (_DAT_0089f230,_DAT_0089f238,_DAT_0089f240,_DAT_0089f248,_DAT_0089f250);
  puVar1 = _DAT_0089f258;
  if (_DAT_0089f260 < _DAT_0089f258) {
    puVar3 = _DAT_0089f260;
    do {
      puVar4 = puVar3 + 1;
      iVar2 = (*(code *)*puVar3)();
      puVar3 = puVar4;
    } while (puVar4 < puVar1);
  }
  return iVar2;
}


