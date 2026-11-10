/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_00584BD0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00684bd0; name: FUN_.text__00684bd0
 */


undefined8 FUN__text__00684bd0(long *param_1,long *param_2,long param_3,int param_4) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (param_3 != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = *param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    puVar2 = *(undefined8 **)(lVar4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(undefined1 *)((long)puVar2 + 7) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)puVar2 + -1) = *puVar2;
    lVar3 = *(long *)(lVar4 + 0x18); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    *(long *)(lVar4 + 0x18) = lVar3 + -1;
    *(byte *)(lVar3 + 3) = *(byte *)(lVar3 + 3) | 8;
    uVar1 = FUN__text__006799cc(*(undefined8 *)(lVar4 + 0x18)); // [自动静态注释] 调用尚未恢复正式名称的函数
    FUN__text__0067999c(*(long *)(lVar4 + 0x18), // [自动静态注释] 调用尚未恢复正式名称的函数
                        (uint)*(byte *)(*(long *)(lVar4 + 0x18) + 3) | // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
                        ((int)param_3 + (uVar1 >> 8)) * 0x100); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    if (param_4 == 0) { // [自动静态注释] 条件判断/分支
      __n = param_3 - 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(char *)(*(long *)(lVar4 + 0x18) + 9) = (char)__n;
      memset(*(void **)(lVar4 + 0x20),0,__n); // [自动静态注释] 内存复制、清零或移动
      *(size_t *)(lVar4 + 0x20) = *(long *)(lVar4 + 0x20) + __n;
    } // [自动静态注释] 作用域/控制流边界
    *param_2 = *param_2 + param_3;
    *(byte *)((long)param_2 + 0xd) = *(byte *)((long)param_2 + 0xd) | 8;
  } // [自动静态注释] 作用域/控制流边界
  return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


