/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0005AB40
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015ab40; name: FUN_.text__0015ab40
 */


undefined4 FUN__text__0015ab40(undefined8 param_1,undefined4 param_2,undefined4 param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  int iVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined4 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = FUN__text__006b46d0(param_1,0x71f0dd); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar4 = FUN__text__006bf32c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
    plVar5 = (long *)FUN__text__006bf32c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
    iVar1 = (**(code **)(*plVar5 + 0x48))(); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (iVar1 != 2) { // [自动静态注释] 条件判断/分支
      return param_3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    param_3 = FUN__text__00161218(DAT_008e1550,*(undefined4 *)(lVar3 + (ulong)*(uint *)(lVar3 + 4))) // [自动静态注释] 调用尚未恢复正式名称的函数
    ; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  uVar6 = DAT_008e1550; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = FUN__text__00160afc(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  uVar6 = FUN__text__00160ae8(uVar6,param_3,uVar2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar3 = FUN__text__006bf32c(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    FUN__text__006bf334(param_1,uVar6); // [自动静态注释] 调用尚未恢复正式名称的函数
    return param_3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  return param_3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


