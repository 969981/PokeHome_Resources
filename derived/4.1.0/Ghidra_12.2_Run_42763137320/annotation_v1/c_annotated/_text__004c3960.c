/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_003C3960
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c3960; name: FUN_.text__004c3960
 */


void FUN__text__004c3960(long param_1,undefined8 param_2,uint param_3) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if ((*(byte *)(param_1 + 0x70) >> 2 & 1) != 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
  FUN__text__004470f0(); // [自动静态注释] 调用尚未恢复正式名称的函数
  if ((param_3 != 0) && ((*(byte *)(param_1 + 0x70) >> 1 & 1) == 0)) { // [自动静态注释] 条件判断/分支
    lVar2 = *(long *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      do { // [自动静态注释] 循环/迭代
        while (lVar3 = lVar2, *(uint *)(lVar3 + 0xc) < param_3) { // [自动静态注释] 循环/迭代
          lVar2 = *(long *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          plVar1 = (long *)(param_1 + 0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          if (*(long *)(param_1 + 0x68) != lVar3) { // [自动静态注释] 条件判断/分支
            plVar1 = (long *)(lVar4 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } // [自动静态注释] 作用域/控制流边界
          *plVar1 = lVar2;
          if (*(long *)(param_1 + 0x60) == lVar3) { // [自动静态注释] 条件判断/分支
            *(long *)(param_1 + 0x60) = lVar4;
          } // [自动静态注释] 作用域/控制流边界
          FUN__text__00446f40(param_1,param_2,lVar3,*(undefined4 *)(lVar3 + 0xc),0,0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
          FUN__text__00400fc0(0,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
          if (lVar2 == 0) goto LAB__text__004c3a2c; // [自动静态注释] 条件判断/分支
        } // [自动静态注释] 作用域/控制流边界
        *(uint *)(lVar3 + 0xc) = *(uint *)(lVar3 + 0xc) - param_3;
        lVar2 = *(long *)(lVar3 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = lVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } while (*(long *)(lVar3 + 0x10) != 0); // [自动静态注释] 循环/迭代
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
LAB__text__004c3a2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  FUN__text__00447104(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


