/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0021E240
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0031e240; name: FUN_.text__0031e240
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN__text__0031e240(long param_1,undefined8 param_2,long param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auVar3 [16]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  byte *local_148; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 auStack_140 [256]; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 local_40; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong local_38; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined1 *local_30; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uStack_28; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_1 == 0) { // [自动静态注释] 条件判断/分支
    return 0x16; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  if (param_3 == 0) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  iVar1 = FUN__text__0031e400(param_1,param_2,param_3,&local_148); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (iVar1 != 0) { // [自动静态注释] 条件判断/分支
    return iVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  lVar2 = *(long *)(local_148 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((*local_148 & 0x7f) == 8) { // [自动静态注释] 条件判断/分支
    local_30 = auStack_140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uStack_28 = local_40; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    auVar3 = FUN__text__0031e7e0(lVar2,0,lVar2,*(undefined4 *)(lVar2 + 4),&local_30); // [自动静态注释] 调用尚未恢复正式名称的函数
    if (auVar3._8_8_ != (ulong)*(uint *)(lVar2 + 4)) { // [自动静态注释] 条件判断/分支
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (local_38 < *(uint *)(lVar2 + 4)) { // [自动静态注释] 条件判断/分支
    return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return 2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


