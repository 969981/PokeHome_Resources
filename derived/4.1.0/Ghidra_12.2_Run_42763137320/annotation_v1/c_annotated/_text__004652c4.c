/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003652C4
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004652c4; name: FUN_.text__004652c4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004652c4(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4 // [自动静态注释] 调用尚未恢复正式名称的函数
                        ,int param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  undefined4 *puVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_68; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_60; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_58; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_54; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int local_50; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uStack_4c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 local_48; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined2 local_44; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 local_42; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  puVar1 = (undefined4 *)FUN__text__004cfb50(0x3f800000,param_3,0xb); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (puVar1 == (undefined4 *)0x0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(puVar1 + 2) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__0042f65c(param_1,*_DAT_008a4648,*(long *)(puVar1 + 2),0xb,param_5,param_4,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_5 != 0) { // [自动静态注释] 条件判断/分支
    local_58 = *puVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_60 = 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_48 = 0xf; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_44 = 0x100; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_42 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_68 = param_3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_54 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    local_50 = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_4c = param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar2 = FUN__text__0042f18c(*_DAT_008a4648,&local_68,0); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(puVar1 + 2) = lVar2;
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004cfc90(param_1,param_3,0xb,1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


