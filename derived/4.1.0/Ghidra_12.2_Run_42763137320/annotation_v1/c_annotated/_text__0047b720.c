/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0037B720
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047b720; name: FUN_.text__0047b720
 */


undefined8 FUN__text__0047b720(long param_1,void *param_2,uint param_3,uint *param_4,uint param_5) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  int iVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__dest; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  if (*(long *)(param_1 + 0x18) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x18) = 0;
  } // [自动静态注释] 作用域/控制流边界
  if (*(long *)(param_1 + 0x28) != 0) { // [自动静态注释] 条件判断/分支
    FUN__text__00400fc0(2); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(undefined8 *)(param_1 + 0x28) = 0;
  } // [自动静态注释] 作用域/控制流边界
  uVar3 = 0x1f; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000;
  if ((((param_4 != (uint *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) && (param_5 != 0)) // [自动静态注释] 条件判断/分支
  { // [自动静态注释] 作用域/控制流边界
    __dest = (void *)FUN__text__00400f80(2,(ulong)(param_3 << 4)); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(void **)(param_1 + 0x18) = __dest;
    if (__dest == (void *)0x0) { // [自动静态注释] 条件判断/分支
      uVar3 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x0047b884; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    memcpy(__dest,param_2,(ulong)(param_3 << 4)); // [自动静态注释] 内存复制、清零或移动
    *(uint *)(param_1 + 0x20) = param_3;
    lVar4 = FUN__text__00400f80(2,param_5 * 0x18); // [自动静态注释] 调用尚未恢复正式名称的函数
    *(long *)(param_1 + 0x28) = lVar4;
    if (lVar4 != 0) { // [自动静态注释] 条件判断/分支
      lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000 | param_5 & 0x7fffffff;
      do { // [自动静态注释] 循环/迭代
        uVar5 = *param_4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(uint *)(*(long *)(param_1 + 0x28) + lVar4 + 8) = param_4[1];
        if (param_3 <= *param_4) { // [自动静态注释] 条件判断/分支
          uVar3 = 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          uVar5 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          goto joined_r0x0047b884; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        } // [自动静态注释] 作用域/控制流边界
        param_4 = param_4 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(ulong *)(*(long *)(param_1 + 0x28) + lVar4) =
             *(long *)(param_1 + 0x18) + (ulong)uVar5 * 0x10;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0xc) = 0;
        *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0x10) = 0;
        lVar1 = *(long *)(param_1 + 0x28) + lVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        lVar4 = lVar4 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        *(undefined4 *)(lVar1 + 0x14) = 0;
      } while ((ulong)param_5 * 0x18 != lVar4); // [自动静态注释] 循环/迭代
      uVar3 = 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      uVar5 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      goto joined_r0x0047b884; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    } // [自动静态注释] 作用域/控制流边界
    uVar3 = 0x34; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  uVar5 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
joined_r0x0047b884: // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  if ((uVar5 & 0x7fffffff) != 0) { // [自动静态注释] 条件判断/分支
    lVar4 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    uVar6 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    do { // [自动静态注释] 循环/迭代
      iVar2 = *(int *)(*(long *)(param_1 + 0x28) + lVar4 + 8); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if (0 < iVar2) { // [自动静态注释] 条件判断/分支
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x28) + lVar4) + (ulong)(iVar2 - 1) * 0x10 + 0xc) = // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
             *(undefined4 *)(param_1 + 0x14);
        uVar5 = *(uint *)(param_1 + 0x30); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      uVar6 = uVar6 + 1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      lVar4 = lVar4 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
    } while (uVar6 < (uVar5 & 0x7fffffff)); // [自动静态注释] 循环/迭代
  } // [自动静态注释] 作用域/控制流边界
  return uVar3; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


