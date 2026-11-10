/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_002D7938
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003d7938; name: FUN_.text__003d7938
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__003d7938(long param_1,long param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  char cVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  __s = *(void **)(param_1 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__s == (void *)0x0) { // [自动静态注释] 条件判断/分支
    __s = operator_new(0x240,_DAT_008a37f8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (__s == (void *)0x0) { // [自动静态注释] 条件判断/分支
      *(undefined8 *)(param_1 + 8) = 0;
      return 0xc; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    memset(__s,0,0x208); // [自动静态注释] 内存复制、清零或移动
    *(undefined4 *)((long)__s + 0x200) = 0xffffffff;
    *(undefined8 *)((long)__s + 0x228) = 0x100000000;
    *(void **)(param_1 + 8) = __s;
    *(void **)((long)__s + 0x210) = __s;
    *(void **)((long)__s + 0x208) = __s;
    *(undefined8 *)((long)__s + 0x220) = 0;
    *(undefined8 *)((long)__s + 0x218) = 0;
    *(undefined4 *)((long)__s + 0x21c) = 1;
    *(undefined8 *)((long)__s + 0x238) = 0;
    *(undefined8 *)((long)__s + 0x230) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (param_2 != 0) { // [自动静态注释] 条件判断/分支
    if (*(long *)((long)__s + 0x220) != 0) { // [自动静态注释] 条件判断/分支
      return 0x11; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
    lVar3 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    if (lVar3 == *(long *)(param_2 + 0x18)) { // [自动静态注释] 条件判断/分支
      FUN__text__003d6818(param_2); // [自动静态注释] 调用尚未恢复正式名称的函数
      lVar3 = *(long *)(param_2 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (lVar3 == *(long *)(param_2 + 0x18)) { // [自动静态注释] 条件判断/分支
        if (*(char *)(param_2 + 0x39) == '\0') { // [自动静态注释] 条件判断/分支
          return 0x16; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
        } // [自动静态注释] 作用域/控制流边界
        *(long *)((long)__s + 0x220) = param_2;
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    if (*(char *)(param_2 + 0x39) != '\0') { // [自动静态注释] 条件判断/分支
      cVar1 = *(char *)(*(long *)(param_2 + 0x28) + lVar3); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(long *)((long)__s + 0x220) = param_2;
      if ((cVar1 == -0x11) && (iVar2 = FUN__text__003d7a74(param_1), iVar2 == 0xfeff)) { // [自动静态注释] 条件判断/分支
        FUN__text__003d7b98(param_1); // [自动静态注释] 调用尚未恢复正式名称的函数
      } // [自动静态注释] 作用域/控制流边界
      return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  return 0x16; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


