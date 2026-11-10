/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_005A3254
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006a3254; name: FUN_.text__006a3254
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__006a3254(long param_1,undefined8 param_2,undefined8 param_3,long param_4, // [自动静态注释] 调用尚未恢复正式名称的函数
                          uint param_5) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar5 = *(long *)(param_4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar5 == 0) { // [自动静态注释] 条件判断/分支
    plVar1 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar1 = (long *)(*(code *)*_DAT_008a6960)(0x50,4,*_DAT_008a6970); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (plVar1 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      FUN__text__006a8030(plVar1); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = _DAT_008a6818; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar1[9] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar1 = lVar3 + 0x10;
      plVar2 = plVar1 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar3 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar4 = (long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *plVar2 = *plVar4;
      *(long **)(lVar3 + 8) = plVar4;
      *(long **)(*plVar4 + 8) = plVar2;
      *plVar4 = lVar3;
      (**(code **)(*plVar1 + 0x40))(plVar1,param_2,*(undefined8 *)(param_1 + 0x40),lVar5); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__006a83e8(plVar1,param_4,*(undefined8 *)(param_1 + 0x20),0,param_5 & 1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return plVar1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


