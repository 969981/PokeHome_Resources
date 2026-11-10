/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_000C8B5C
 * 用途/行为：用途尚未确认；代码可观察到：有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001c8b5c; name: thunk_FUN_.text__001c8b60
 */


void thunk_FUN__text__001c8b60(long param_1) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  float fVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  lVar4 = *(long *)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar3 = *(long *)(lVar4 + 0x2d0); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar3 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  } // [自动静态注释] 作用域/控制流边界
  lVar5 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  do { // [自动静态注释] 循环/迭代
    lVar1 = param_1 + lVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (*(char *)(lVar1 + 0x38) != '\0') { // [自动静态注释] 条件判断/分支
      if ((*(char *)(lVar1 + 0x39) == '\0') && // [自动静态注释] 条件判断/分支
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x30), 28.0 <= fVar6)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x39) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar4 + 0x2d0) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x30), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x38) = 0;
        *(undefined1 *)(lVar1 + 0x39) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x28,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(lVar1 + 0xb0) != '\0') { // [自动静态注释] 条件判断/分支
      if ((*(char *)(lVar1 + 0xb1) == '\0') && // [自动静态注释] 条件判断/分支
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0xa8), 28.0 <= fVar6)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0xb1) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar4 + 0x2d0) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0xa8), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0xb0) = 0;
        *(undefined1 *)(lVar1 + 0xb1) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0xa0,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(lVar1 + 0x128) != '\0') { // [自动静态注释] 条件判断/分支
      if ((*(char *)(lVar1 + 0x129) == '\0') && // [自动静态注释] 条件判断/分支
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x120), 28.0 <= fVar6)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x129) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar4 + 0x2d0) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x120), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x128) = 0;
        *(undefined1 *)(lVar1 + 0x129) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x118,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(lVar1 + 0x1a0) != '\0') { // [自动静态注释] 条件判断/分支
      if ((*(char *)(lVar1 + 0x1a1) == '\0') && // [自动静态注释] 条件判断/分支
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x198), 28.0 <= fVar6)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x1a1) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar4 + 0x2d0) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x198), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x1a0) = 0;
        *(undefined1 *)(lVar1 + 0x1a1) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 400,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(lVar1 + 0x218) != '\0') { // [自动静态注释] 条件判断/分支
      if ((*(char *)(lVar1 + 0x219) == '\0') && // [自动静态注释] 条件判断/分支
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x210), 28.0 <= fVar6)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x219) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar4 + 0x2d0) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x210), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x218) = 0;
        *(undefined1 *)(lVar1 + 0x219) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x208,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(lVar1 + 0x290) != '\0') { // [自动静态注释] 条件判断/分支
      if ((*(char *)(lVar1 + 0x291) == '\0') && // [自动静态注释] 条件判断/分支
         (fVar6 = (float)FUN__text__003c80c0(lVar3,lVar1 + 0x288), 28.0 <= fVar6)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x291) = 1;
      } // [自动静态注释] 作用域/控制流边界
      if ((*(long *)(lVar4 + 0x2d0) == 0) || // [自动静态注释] 条件判断/分支
         (uVar2 = FUN__text__003c7ec0(*(long *)(lVar4 + 0x2d0),lVar1 + 0x288), (uVar2 & 1) != 0)) { // [自动静态注释] 调用尚未恢复正式名称的函数
        *(undefined1 *)(lVar1 + 0x290) = 0;
        *(undefined1 *)(lVar1 + 0x291) = 1;
        FUN__text__003c7c60(lVar3,lVar1 + 0x280,0); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    lVar5 = lVar5 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } while (lVar5 != 0x78); // [自动静态注释] 循环/迭代
  if (lVar3 == 0) { // [自动静态注释] 条件判断/分支
    return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
  } // [自动静态注释] 作用域/控制流边界
                    /* WARNING: Could not recover jumptable at 0x001c8df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48)); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


