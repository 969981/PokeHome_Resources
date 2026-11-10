/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003668C0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004668c0; name: FUN_.text__004668c0
 */


void FUN__text__004668c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0xc0) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00466580(param_1,*(long *)(param_1 + 0xc0),param_3,param_3,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  plVar3 = *(long **)(param_1 + 200); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (plVar3 != (long *)0x0) { // [自动静态注释] 条件判断/分支
    plVar2 = (long *)*plVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar1 = *(uint *)(plVar3 + 1); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    plVar3 = plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (uVar1 == 0) { // [自动静态注释] 条件判断/分支
LAB__text__00466940: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      if (plVar3 != plVar2 + (ulong)uVar1 * 2) { // [自动静态注释] 条件判断/分支
        FUN__text__00466580(param_1,plVar3[1]); // [自动静态注释] 调用尚未恢复正式名称的函数
        return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar4 = (ulong)uVar1 << 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        if (*plVar3 == *param_4) goto LAB__text__00466940; // [自动静态注释] 条件判断/分支
        plVar3 = plVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = lVar4 + -0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (lVar4 != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


