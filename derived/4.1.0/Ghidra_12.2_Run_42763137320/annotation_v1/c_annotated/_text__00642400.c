/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00542400
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00642400; name: FUN_.text__00642400
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00642400(void) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = 0x402; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  puVar3 = _DAT_008a63e8; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    plVar2 = (long *)*puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *puVar3 = 0;
    if (plVar2 != (long *)0x0) { // [自动静态注释] 条件判断/分支
      lVar1 = *plVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar1 != 0) { // [自动静态注释] 条件判断/分支
        plVar2[1] = lVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        (**(code **)(*(long *)plVar2[3] + 0x18))((long *)plVar2[3],lVar1,plVar2[2] - lVar1,8); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      (**(code **)(*(long *)puVar3[1] + 0x18))((long *)puVar3[1],plVar2,puVar3[2],puVar3[3]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    puVar3 = puVar3 + 4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    lVar4 = lVar4 + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar4 != 0); // [自动静态注释] 循环/迭代
  if (DAT_00c26798 != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__005d9290(DAT_00c26798,&DAT_00c26790); // [自动静态注释] 调用尚未恢复正式名称的函数
    lVar4 = DAT_00c26798; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    DAT_00c26798 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Could not recover jumptable at 0x006424b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  DAT_00c26798 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


