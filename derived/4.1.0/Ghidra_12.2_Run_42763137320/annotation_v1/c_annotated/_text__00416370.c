/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00316370
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00416370; name: FUN_.text__00416370
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__00416370(undefined8 param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar2 = FUN__text__0044e1d0(param_2,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  plVar1 = _DAT_008a48f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if ((int)uVar2 != 0x3f) { // [自动静态注释] 条件判断/分支
    plVar5 = _DAT_008a48f0 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      lVar3 = lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      plVar5 = (long *)(lVar4 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (lVar4 != 0 && lVar4 != param_2); // [自动静态注释] 循环/迭代
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      plVar5 = _DAT_008a48f0 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (_DAT_008a48f0[1] != lVar4) { // [自动静态注释] 条件判断/分支
        plVar5 = (long *)(lVar3 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *plVar5 = *(long *)(lVar4 + 0x68);
      if (*plVar1 == lVar4) { // [自动静态注释] 条件判断/分支
        *plVar1 = lVar3;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if ((int)uVar2 == 1) { // [自动静态注释] 条件判断/分支
      uVar2 = FUN__text__00415c70(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    FUN__text__004061f0(param_2,1); // [自动静态注释] 调用尚未恢复正式名称的函数
    uVar2 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  return uVar2; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


