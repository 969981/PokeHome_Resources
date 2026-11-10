/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_001C522C
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c522c; name: FUN_.text__002c522c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c522c(long param_1,long *param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar1 = *(long *)(param_1 + 0x58); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,0x39d0,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar4 = uVar4 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar4 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
    *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    FUN__text__002c5d10(); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    puVar3 = *(undefined8 **)(lVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined8 *)(lVar1 + 8) = uVar2;
    if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
      (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      (**(code **)(**(long **)(lVar1 + 0x10) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                (*(long **)(lVar1 + 0x10),puVar3,*(undefined8 *)(lVar1 + 0x18), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                 *(undefined8 *)(lVar1 + 0x20));
      uVar2 = *(undefined8 *)(lVar1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } // [自动静态注释] 作用域/控制流边界
    *(long **)(lVar1 + 0x10) = param_2;
    *(undefined8 *)(lVar1 + 0x18) = 0x39d0;
    *(undefined8 *)(lVar1 + 0x20) = 0x10;
    FUN__text__002c6198(uVar2,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
    __s = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x850,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(long *)(uVar4 + 0x98) != 0x10) { // [自动静态注释] 条件判断/分支
      *(long **)(uVar4 + 0x18 + *(long *)(uVar4 + 0x98) * 8) = param_2;
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
      memset(__s,0,0x850); // [自动静态注释] 内存复制、清零或移动
      *__s = _DAT_008a2568 + 0x10;
      __s[0x14] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[0x17] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[6] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[2] = 0x867938; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      __s[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      memset(__s + 0x25,0,0x71c); // [自动静态注释] 内存复制、清零或移动
      *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
      puVar3 = *(undefined8 **)(lVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long **)(lVar1 + 0x28) = __s;
      if (puVar3 != (undefined8 *)0x0) { // [自动静态注释] 条件判断/分支
        (**(code **)*puVar3)(puVar3); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        (**(code **)(**(long **)(lVar1 + 0x30) + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                  (*(long **)(lVar1 + 0x30),puVar3,*(undefined8 *)(lVar1 + 0x38), // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                   *(undefined8 *)(lVar1 + 0x40));
        __s = *(long **)(lVar1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      *(undefined8 *)(lVar1 + 0x40) = 0x10;
      *(long **)(lVar1 + 0x30) = param_2;
      *(undefined8 *)(lVar1 + 0x38) = 0x850;
      FUN__text__002c5870(__s,param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
} // [自动静态注释] 作用域/控制流边界


