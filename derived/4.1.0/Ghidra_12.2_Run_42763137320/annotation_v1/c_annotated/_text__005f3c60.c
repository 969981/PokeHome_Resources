/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_004F3C60
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f3c60; name: FUN_.text__005f3c60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005f3c60(long *param_1,long *param_2,ulong param_3,undefined1 param_4,long param_5, // [自动静态注释] 调用尚未恢复正式名称的函数
                        undefined1 param_6) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义

{ // [自动静态注释] 作用域/控制流边界
  long lVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *__s; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  ulong uVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  size_t __n; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long *plVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  param_1[7] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[2] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[3] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = _DAT_0089f690 + 0x10;
  uVar3 = tpidr_el0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[4] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[5] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar3 = uVar3 & 0xffffffffffffe000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)(param_1 + 6) = 0;
  if ((uVar3 == 0) || (*(long *)(uVar3 + 0x98) == 0)) { // [自动静态注释] 条件判断/分支
    plVar4 = (long *)0x0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(undefined4 *)(param_1 + 10) = 0;
  lVar2 = _DAT_008a03f0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xc] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x10] = param_5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  plVar5 = param_1 + 0xb; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = 0;
  param_1[0xe] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xf] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[9] = lVar2 + 0xb0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *param_1 = lVar2 + 0x10;
  param_1[1] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  lVar2 = *param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x11] = lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))(); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    plVar4 = (long *)param_1[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(char *)(param_1 + 0x13) = (char)param_3;
  *(undefined4 *)((long)param_1 + 0x99) = 0;
  param_1[0x12] = 0x4000600000000; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined1 *)((long)param_1 + 0x9d) = param_4;
  *(undefined4 *)((long)param_1 + 0x9e) = 0;
  *(undefined2 *)((long)param_1 + 0xa2) = 0;
  *(undefined1 *)((long)param_1 + 0xa4) = param_6;
  __n = ((param_3 & 0xff) + (param_3 & 0xff) * 4) * 0x20; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined2 *)((long)param_1 + 0xa5) = 0;
  *(undefined4 *)((long)param_1 + 0xbc) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((long)param_1 + 0x114) = 0;
  *(undefined8 *)((long)param_1 + 0xe2) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0x10a) = 0;
  *(undefined8 *)((long)param_1 + 0x104) = 0;
  *(undefined8 *)((long)param_1 + 0xfc) = 0;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  param_1[0x15] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0x16] = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(undefined4 *)((long)param_1 + 0xb7) = 0;
  __s = (void *)(**(code **)(*plVar4 + 0x10))(plVar4,__n,0x10); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(long *)(uVar3 + 0x98) == 0x10) { // [自动静态注释] 条件判断/分支
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10(); // [自动静态注释] 调用尚未恢复正式名称的函数
  } // [自动静态注释] 作用域/控制流边界
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = plVar4;
  lVar2 = *(long *)(uVar3 + 0x98); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *(long *)(uVar3 + 0x98) = lVar2 + 1;
  if ((param_3 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
    memset(__s,0,__n); // [自动静态注释] 内存复制、清零或移动
    lVar2 = *(long *)(uVar3 + 0x98) + -1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  *(long *)(uVar3 + 0x98) = lVar2;
  lVar2 = *plVar5; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  *plVar5 = (long)__s;
  if (lVar2 != 0) { // [自动静态注释] 条件判断/分支
    (**(code **)(*(long *)param_1[0xc] + 0x18)) // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
              ((long *)param_1[0xc],lVar2,param_1[0xd],param_1[0xe]); // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
    __s = (void *)param_1[0xb]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  } // [自动静态注释] 作用域/控制流边界
  param_1[0xc] = (long)plVar4; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xd] = __n; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  param_1[0xe] = 0x10; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (__s != (void *)0x0) { // [自动静态注释] 条件判断/分支
    if ((param_3 & 0xff) != 0) { // [自动静态注释] 条件判断/分支
      if (((uint)param_3 & 0xff) == 1) { // [自动静态注释] 条件判断/分支
        uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      } // [自动静态注释] 作用域/控制流边界
      else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
        lVar2 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        uVar3 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        do { // [自动静态注释] 循环/迭代
          uVar3 = uVar3 + 2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(*plVar5 + lVar2) = 0;
          lVar1 = *plVar5 + lVar2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          lVar2 = lVar2 + 0x140; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          *(undefined8 *)(lVar1 + 0xa0) = 0;
        } while ((param_3 & 0xfe) != uVar3); // [自动静态注释] 循环/迭代
      } // [自动静态注释] 作用域/控制流边界
      if ((param_3 & 1) != 0) { // [自动静态注释] 条件判断/分支
        *(undefined8 *)(*plVar5 + uVar3 * 0xa0) = 0;
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
    *(undefined1 *)((long)param_1 + 0xa5) = *(undefined1 *)((long)param_1 + 0x9d);
    *(undefined1 *)((long)param_1 + 0xa6) = *(undefined1 *)((long)param_1 + 0xa4);
    *(undefined1 *)(param_1 + 0x22) = 1;
  } // [自动静态注释] 作用域/控制流边界
  return; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


