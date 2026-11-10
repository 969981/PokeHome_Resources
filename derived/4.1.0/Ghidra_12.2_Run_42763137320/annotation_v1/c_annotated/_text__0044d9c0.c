/* HOME41 静态自动注释；并非任天堂原始源代码
 * 函数研究名：SUB_0034D9C0
 * 用途/行为：用途尚未确认；代码可观察到：内存复制/初始化, 有返回值
 * 证据等级：BEHAVIOR_OBSERVED；原有 Ghidra C 表达式未改动
 */
/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0044d9c0; name: FUN_.text__0044d9c0
 */


undefined8 FUN__text__0044d9c0(void *param_1,int param_2) // [自动静态注释] 调用尚未恢复正式名称的函数

{ // [自动静态注释] 作用域/控制流边界
  uint uVar1; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar2; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 *puVar3; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  uint uVar4; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar5; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  undefined8 uVar6; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar7; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  void *pvVar8; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  long lVar9; // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
  
  uVar4 = *(uint *)((long)param_1 + 0x28); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  uVar1 = *(int *)((long)param_1 + 0x2c) + param_2; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  pvVar7 = param_1; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
  if (*(void **)((long)param_1 + 0x20) == (void *)0x0) { // [自动静态注释] 条件判断/分支
    if (1 < uVar1) { // [自动静态注释] 条件判断/分支
      pvVar7 = (void *)FUN__text__00400f90(4,(ulong)uVar1 * 0x18,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (pvVar7 == (void *)0x0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      pvVar8 = *(void **)((long)param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
      if ((pvVar8 != (void *)0x0) && (pvVar8 != pvVar7)) { // [自动静态注释] 条件判断/分支
        if (uVar4 != 0) { // [自动静态注释] 条件判断/分支
          lVar9 = 0; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          do { // [自动静态注释] 循环/迭代
            puVar2 = (undefined8 *)((long)pvVar7 + lVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *puVar2 = 0xffffffffffffffff;
            *(undefined4 *)(puVar2 + 1) = 0;
            *(undefined4 *)(puVar2 + 2) = 0x3f800000;
            puVar3 = (undefined8 *)(*(long *)((long)param_1 + 0x20) + lVar9); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            lVar9 = lVar9 + 0x18; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar5 = *puVar3; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            uVar6 = puVar3[1]; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
            *(undefined4 *)(puVar2 + 2) = *(undefined4 *)(puVar3 + 2);
            *puVar2 = uVar5;
            puVar2[1] = uVar6; // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
          } while ((ulong)uVar4 * 0x18 != lVar9); // [自动静态注释] 循环/迭代
          pvVar8 = *(void **)((long)param_1 + 0x20); // [自动静态注释] 赋值或状态更新，字段名称仍待恢复
        } // [自动静态注释] 作用域/控制流边界
        if (pvVar8 != param_1) { // [自动静态注释] 条件判断/分支
          FUN__text__00400fc0(4); // [自动静态注释] 调用尚未恢复正式名称的函数
        } // [自动静态注释] 作用域/控制流边界
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  else if (1 < uVar1) { // [自动静态注释] 条件判断/分支
    if (*(void **)((long)param_1 + 0x20) == param_1) { // [自动静态注释] 条件判断/分支
      pvVar7 = (void *)FUN__text__00400f90(4,(ulong)uVar1 * 0x18,0x10); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (pvVar7 == (void *)0x0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
      memcpy(pvVar7,param_1,(ulong)uVar4 * 0x18 & 0xfffffff8); // [自动静态注释] 内存复制、清零或移动
    } // [自动静态注释] 作用域/控制流边界
    else { // [自动静态注释] 反编译表达式/局部变量；未验证业务语义
      pvVar7 = (void *)FUN__text__00400fb0(); // [自动静态注释] 调用尚未恢复正式名称的函数
      if (pvVar7 == (void *)0x0) { // [自动静态注释] 条件判断/分支
        return 0; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
      } // [自动静态注释] 作用域/控制流边界
    } // [自动静态注释] 作用域/控制流边界
  } // [自动静态注释] 作用域/控制流边界
  *(void **)((long)param_1 + 0x20) = pvVar7;
  *(uint *)((long)param_1 + 0x2c) = uVar1;
  return 1; // [自动静态注释] 返回表达式；具体返回语义取决于调用者
} // [自动静态注释] 作用域/控制流边界


