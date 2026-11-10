/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0025C668
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0035c668; name: FUN_.text__0035c668
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0035c668(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  undefined8 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_14; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar2 = FUN__text__00321ac0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  puVar1 = _DAT_0089f448; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(char *)(lVar2 + 0x9349d) == '\0') { // [自动静态注释] 条件判断/分支
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*_DAT_0089f448,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = param_1 + 0x60; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x220; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035c9a0(uVar3,_DAT_008a2f40,&local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = param_1 + 0x4a0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035c9a0(uVar3,_DAT_008a2f48,&local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = param_1 + 0x524; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035c9a0(uVar3,_DAT_008a2f50,&local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f58,param_1 + 0x56c); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f60,param_1 + 0x56d); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f68,param_1 + 0x56e); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f70,param_1 + 0x56f); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_40 = local_40 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035cdf0(uVar3,_DAT_008a2f78,param_1 + 0x570,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035d030(uVar3,_DAT_008a2f80,param_1 + 0x590); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1 = param_1 + 0x592; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*_DAT_0089f448,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = param_1 + 0x594; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x220; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035c9a0(uVar3,_DAT_008a2f40,&local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = param_1 + 0x9d4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x42; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035c9a0(uVar3,_DAT_008a2f48,&local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_14 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_14); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = param_1 + 0xa58; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_40 = 0x24; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035c9a0(uVar3,_DAT_008a2f50,&local_38,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f58,param_1 + 0xaa0); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f60,param_1 + 0xaa1); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f68,param_1 + 0xaa2); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035cbe0(uVar3,_DAT_008a2f70,param_1 + 0xaa3); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_40 = local_40 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_40); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    FUN__text__0035cdf0(uVar3,_DAT_008a2f78,param_1 + 0xaa4,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0035d030(uVar3,_DAT_008a2f80,param_1 + 0xac4); // [自动静态注释] 调用尚未恢复正式名称的函数
    local_38 = local_38 & 0xffffffff00000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar3 = FUN__text__00371260(*puVar1,&local_38); // [自动静态注释] 调用尚未恢复正式名称的函数
    param_1 = param_1 + 0xac6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__0035d030(uVar3,0x734ff8,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


