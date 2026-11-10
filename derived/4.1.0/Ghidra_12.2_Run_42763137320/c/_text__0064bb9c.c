/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0064bb9c; name: FUN_.text__0064bb9c
 */


undefined8 FUN__text__0064bb9c(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  Context *this;
  undefined8 *puVar4;
  undefined8 *local_38;
  
  param_1 = (undefined8 *)*param_1;
  iVar2 = FUN__text__0064ed8c(*param_1);
  *(int *)(param_1 + 1) = iVar2;
  if (iVar2 == 0) {
    FUN__text__0064ef64(*param_1,0x200002,param_1 + 0x17);
    local_38 = (undefined8 *)0x0;
    FUN__text__0064ef64(*param_1,0x40001c,&local_38);
    puVar1 = local_38;
    if (local_38 != (undefined8 *)0x0) {
      memset(&DAT_00c4f590,0,0x2000);
      strncpy(&DAT_00c4f590,(char *)*puVar1,0x1fff);
      puVar4 = (undefined8 *)puVar1[1];
      if (puVar4 != (undefined8 *)0x0) {
        memset(&DAT_00c51590,0,0x2000);
        strncpy(&DAT_00c51590,(char *)*puVar4,0x1fff);
        puVar4 = (undefined8 *)puVar4[1];
        if (puVar4 != (undefined8 *)0x0) {
          memset(&DAT_00c53590,0,0x2000);
          strncpy(&DAT_00c53590,(char *)*puVar4,0x1fff);
          puVar4 = (undefined8 *)puVar4[1];
          if (puVar4 != (undefined8 *)0x0) {
            memset(&DAT_00c55590,0,0x2000);
            strncpy(&DAT_00c55590,(char *)*puVar4,0x1fff);
            puVar4 = (undefined8 *)puVar4[1];
            if (puVar4 != (undefined8 *)0x0) {
              memset(&DAT_00c57590,0,0x2000);
              strncpy(&DAT_00c57590,(char *)*puVar4,0x1fff);
              puVar4 = (undefined8 *)puVar4[1];
              if (puVar4 != (undefined8 *)0x0) {
                memset(&DAT_00c59590,0,0x2000);
                strncpy(&DAT_00c59590,(char *)*puVar4,0x1fff);
                puVar4 = (undefined8 *)puVar4[1];
                if (puVar4 != (undefined8 *)0x0) {
                  memset(&DAT_00c5b590,0,0x2000);
                  strncpy(&DAT_00c5b590,(char *)*puVar4,0x1fff);
                  puVar4 = (undefined8 *)puVar4[1];
                  if (puVar4 != (undefined8 *)0x0) {
                    memset(&DAT_00c5d590,0,0x2000);
                    strncpy(&DAT_00c5d590,(char *)*puVar4,0x1fff);
                  }
                }
              }
            }
          }
        }
      }
      FUN__text__0066bd88(puVar1);
    }
  }
  else {
    uVar3 = FUN__text__0064bb00(param_1);
    *(undefined4 *)(param_1 + 0x16) = uVar3;
  }
  if (param_1[0x18] != 0) {
    FUN__text__0066bd88();
    param_1[0x18] = 0;
  }
  FUN__text__0064ef58(*param_1);
  *param_1 = 0;
  if (param_1[0x12] != 0) {
    nn::ssl::Context::Destroy();
    this = (Context *)param_1[0x12];
    param_1[0x12] = 0;
    if (this != (Context *)0x0) {
      nn::ssl::Context::~Context(this);
      (**(code **)(*(long *)param_1[0x13] + 0x18))
                ((long *)param_1[0x13],this,param_1[0x14],param_1[0x15]);
    }
  }
  return 1;
}


