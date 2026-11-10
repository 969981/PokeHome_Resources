/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00553EA0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00653ea0; name: FUN_.text__00653ea0
 */


undefined8 FUN__text__00653ea0(long *param_1,void *param_2,size_t param_3,undefined8 param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long *plVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar3 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar1 = (long *)(lVar3 + lVar2 * 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar4 = (long *)*plVar1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    if (plVar4 == (long *)0x0) { // [自动静态注释] 条件判断/分支
LAB__text__00653f2c: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      lVar3 = FUN__text__006783d4(param_3 + 0x30); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
        param_4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        memcpy((void *)(lVar3 + 0x28),param_2,param_3); // [自动静态注释] 内存复制、清零或移动
        *(undefined8 *)(lVar3 + 0x18) = param_4;
        *(size_t *)(lVar3 + 0x20) = param_3;
        FUN__text__00656b20(plVar1,plVar1[1],lVar3,lVar3); // [自动静态注释] 调用尚未恢复正式名称的函数
        param_1[5] = param_1[5] + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      return param_4; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = (*(code *)param_1[2])(*plVar4 + 0x28,*(undefined8 *)(*plVar4 + 0x20),param_2,param_3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
      FUN__text__00656b90(plVar1,plVar4,param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      param_1[5] = param_1[5] + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto LAB__text__00653f2c; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    plVar4 = (long *)plVar4[2]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while( true ); // [自动静态注释] 循环/迭代
} // [自动静态注释] 作用域/控制流边界


