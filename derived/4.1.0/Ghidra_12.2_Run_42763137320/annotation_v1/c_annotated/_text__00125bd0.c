/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00025BD0
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00125bd0; name: FUN_.text__00125bd0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00125bd0(undefined8 *param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  code *pcVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  FUN__text__00127410(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
  lVar5 = 0xc80; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar1 = _DAT_0089f878 + 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar2 = param_2 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar2 + -0x100) = lVar1;
    if (*(long *)(lVar2 + -0xf8) == 0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      pcVar4 = *(code **)(lVar2 + -0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      FUN__text__005d9290(); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(lVar2 + -0xf8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(undefined8 *)(lVar2 + -0xf8) = 0;
      if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      } // [自动静态注释] 作用域/控制流边界
      pcVar4 = *(code **)(lVar2 + -0x68); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + -0x60) = 0;
      *(undefined8 *)(lVar2 + -0x58) = 0;
      *(undefined8 *)(lVar2 + -0x70) = 0;
      *(undefined8 *)(lVar2 + -0x68) = 0;
      (*pcVar4)(lVar2 + -0x50); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    pcVar4 = *(code **)(lVar2 + -0xe8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (pcVar4 != (code *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(lVar2 + -0xe0) = 0;
      *(undefined8 *)(lVar2 + -0xd8) = 0;
      *(undefined8 *)(lVar2 + -0xf0) = 0;
      *(undefined8 *)(lVar2 + -0xe8) = 0;
      (*pcVar4)(lVar2 + -0xd0); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    if (*(long *)(lVar2 + -0xf8) != 0) { // [自动静态注释] 条件判断/分支
      (**(code **)(*(long *)(*(long *)(lVar2 + -0xf8) + 0x48) + 0x18))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      *(undefined8 *)(lVar2 + -0xf8) = 0;
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = lVar5 + -400; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar5 != 0); // [自动静态注释] 循环/迭代
                    /* WARNING: Could not recover jumptable at 0x00125cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_2,param_1[1],param_1[2]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


